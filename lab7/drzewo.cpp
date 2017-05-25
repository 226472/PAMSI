#include "drzewo.hh"

// Rotacja RR
//-----------
drzewoAVL::drzewoAVL()
{
  korzen = NULL;
  ilosc_elementow = 0;
}
wezelAVL * drzewoAVL::rotacjaRR(wezelAVL * A)
{
  wezelAVL * B = A->prawy, * P = A->ojciec;

  A->prawy = B->lewy;
  if(A->prawy) A->prawy->ojciec = A;
  B->lewy = A;
  B->ojciec = P;
  A->ojciec = B;
  if(P)
  {
    if(P->lewy == A) P->lewy = B; else P->prawy = B;
  }
  else korzen = B;

  if(B->bf == -1)
  {
    A->bf = B->bf = 0;
  }
  else
  {
    A->bf = -1; B->bf = 1;
  }
  return B;
}

wezelAVL * drzewoAVL::rotacjaLL(wezelAVL * A)
{
  wezelAVL * B = A->lewy, * P = A->ojciec;

  A->lewy = B->prawy;
  if(A->lewy) A->lewy->ojciec = A;
  B->prawy = A;
  B->ojciec = P;
  A->ojciec = B;
  if(P)
  {
    if(P->lewy == A) P->lewy = B; else P->prawy = B;
  }
  else korzen = B;

  if(B->bf == 1)
  {
    A->bf = B->bf = 0;
  }
  else
  {
    A->bf = 1; B->bf = -1;
  }

  return B;
}

// Rotacja RL
//-----------

wezelAVL * drzewoAVL::rotacjaRL(wezelAVL * A)
{
  wezelAVL * B = A->prawy, * C = B->lewy, * P = A->ojciec;

  B->lewy = C->prawy;
  if(B->lewy) B->lewy->ojciec = B;
  A->prawy = C->lewy;
  if(A->prawy) A->prawy->ojciec = A;
  C->lewy = A;
  C->prawy = B;
  A->ojciec = B->ojciec = C;
  C->ojciec = P;
  if(P)
  {
    if(P->lewy == A) P->lewy = C; else P->prawy = C;
  }
  else korzen = C;

  A->bf = (C->bf == -1) ?  1 : 0;
  B->bf = (C->bf ==  1) ? -1 : 0;
  C->bf = 0;

  return C;
}

// Rotacja LR
//-----------

wezelAVL * drzewoAVL::rotacjaLR(wezelAVL * A)
{
  wezelAVL * B = A->lewy, * C = B->prawy, * P = A->ojciec;

  B->prawy = C->lewy;
  if(B->prawy) B->prawy->ojciec = B;
  A->lewy = C->prawy;
  if(A->lewy) A->lewy->ojciec = A;
  C->prawy = A;
  C->lewy = B;
  A->ojciec = B->ojciec = C;
  C->ojciec = P;
  if(P)
  {
    if(P->lewy == A) P->lewy = C; else P->prawy = C;
  }
  else korzen = C;

  A->bf = (C->bf ==  1) ? -1 : 0;
  B->bf = (C->bf == -1) ?  1 : 0;
  C->bf = 0;

  return C;
}

// Wstawia element do struktury drzewoAVL
//---------------------------------

bool drzewoAVL::insert(wezelAVL * n)
{
  wezelAVL * x = korzen, * y, * z;

  y = n->lewy = n->prawy = NULL;
  n->bf = 0;

  while(x)
  {
    if(x->wartosc == n->wartosc)
    {
      delete n;
      return false;
    }
    y = x;
    x = (n->wartosc < x->wartosc) ? x->lewy : x->prawy;
  }

  ilosc_elementow++;

  if(!(n->ojciec = y))
  {
    korzen = n;
    return true;
  }
  if(n->wartosc < y->wartosc) y->lewy = n; else y->prawy = n;
  if(y->bf)
  {
    y->bf = 0;
    return true;
  }
  y->bf = (y->lewy == n) ? 1 : -1;
  z = y->ojciec;
  while(z)
  {
    if(z->bf) break;
    z->bf = (z->lewy == y) ? 1 : -1;
    y = z; z = z->ojciec;
  }

  if(!z) return true;

  if(z->bf == 1)
  {
    if(z->prawy == y)
    {
      z->bf = 0;
      return true;
    }
    if(y->bf == -1) rotacjaLR(z); else rotacjaLL(z);
    return true;
  }
  else
  {
    if(z->lewy == y)
    {
      z->bf = 0;
      return true;
    }
    if(y->bf == 1) rotacjaRL(z); else rotacjaRR(z);
    return true;
  }
}


wezelAVL * drzewoAVL::szukaj(int klucz)
{
    int ilosc_krokow=0;
  wezelAVL * x = korzen;
for(int i=0; i<ilosc_elementow; i++)
{
    if(i==ilosc_elementow-1){
         cout<<"nie znalaz³em elementu"<<endl;
         break;
    }

    if (x->wartosc==klucz){
        cout<<"znalaz³em po "<<ilosc_krokow<<" krokach"<<endl;
        break;
    }
        else{
    x = (klucz < x->wartosc) ? x->lewy : x->prawy;
    ilosc_krokow++;}

}
  return x;
}


wezelAVL * drzewoAVL::maxwezel(wezelAVL * x)
{
  while(x->prawy) x = x->prawy;
  return x;
}

// Zwraca wêze³ poprzednika

wezelAVL * drzewoAVL::pred(wezelAVL * x)
{
  if(x->lewy) return maxwezel(x->lewy);

  wezelAVL * y;

  do
  {
    y = x;
    x = x->ojciec;
  } while(x && (x->prawy != y));

  return x;
}

wezelAVL * drzewoAVL::remove(wezelAVL * x)
{
  wezelAVL * t, * y, * z;
  bool nest;

  if((x->lewy) && (x->prawy))
  {
    y = remove(pred(x));
    ilosc_elementow++;
    nest = false;
  }
  else
  {
    if(x->lewy)
    {
      y = x->lewy; x->lewy = NULL;
    }
    else
    {
      y = x->prawy; x->prawy = NULL;
    }
    x->bf = 0;
    nest = true;
  }

  if(y)
  {
    y->ojciec = x->ojciec;
    if(y->lewy  == x->lewy)  y->lewy->ojciec  = y;
    if(y->prawy == x->prawy) y->prawy->ojciec = y;
    y->bf = x->bf;
  }

  if(x->ojciec)
  {
    if(x->ojciec->lewy == x) x->ojciec->lewy = y; else x->ojciec->prawy = y;
  }
  else korzen = y;

  if(nest)
  {
    z = y;
    y = x->ojciec;
    while(y)
    {
      if(!(y->bf))
      {

// Przypadek nr 1

        y->bf = (y->lewy == z) ? -1 : 1;
        break;
      }
      else
      {
        if(((y->bf ==  1) && (y->lewy  == z)) || ((y->bf == -1) && (y->prawy == z)))
        {

// Przypadek nr 2

          y->bf = 0;
          z = y; y = y->ojciec;
        }
        else
        {
          t = (y->lewy == z) ? y->prawy : y->lewy;
          if(!(t->bf))
          {

// Przypadek 3A

            if(y->bf == 1) rotacjaLL(y); else rotacjaRR(y);
            break;
          }
          else if(y->bf == t->bf)
          {

// Przypadek 3B

            if(y->bf == 1) rotacjaLL(y); else rotacjaRR(y);
            z = t; y = t->ojciec;
          }
          else
          {

// Przypadek 3C

            if(y->bf == 1) rotacjaLR(y); else rotacjaRL(y);
            z = y->ojciec; y = z->ojciec;
          }
        }
      }
    }
  }
  ilosc_elementow--;
  return x;
}


void drzewoAVL::dodaj(int klucz)
{
  wezelAVL * x;
  x = new wezelAVL;
  x->wartosc=klucz;
  insert(x);
}
void drzewoAVL::usun(int klucz)
{
    remove(szukaj(klucz));
}
void drzewoAVL::wykonaj(int rozmiar_problemu)
{
    szukaj(rozmiar_problemu-1);
}
string drzewoAVL::przedstaw_sie()
    {
        string nazwa="drzewo AVL";
        return nazwa;
    }
void drzewoAVL::inicjuj(int rozmiar_problemu)
{
    for(int i=0; i<rozmiar_problemu; ++i)
        dodaj(i);
}
