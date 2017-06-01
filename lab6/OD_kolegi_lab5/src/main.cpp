#include "table.hh"
#include "measure.hh"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	table t1;
	measure meter;
	meter.gauge(t1);

	return 0;
}