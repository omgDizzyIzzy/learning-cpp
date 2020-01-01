/* Constantly updating to make slightly better and look cleaner, this is for learning purposes only for myself to track progression
It's also my way of "taking notes" as I'm a hands on learning

This is essentially my "Hello World" */

#include <iostream>
#include <fstream>
#include "functions.hh"
#include "Classes/Numbers.h"
using namespace std;

// Testing, calling text from outside a function
string about = "Izzy M. - I'm testing classes in separate files";

int main()
{
	cout << about << endl;
	Numbers obj;
	obj.years();
	goodbye();
	return 0;
}
