/***************************************************************************************************
PROGRAM : Fluid_conversion_US.cpp
PURPOSE : It will convert the value of fluid ounce(s) into other US fluid quantities.
          For this reason, it will take the value of fluid ounce(s) as input,
          and will show the output allocating the input value into
          various units, like- barrels, gallons, quarts, cups, etc.
Coder : Mosfiqur Rahman (mr986@drexel.edu)
Last Modified : 19th January, 2016.
***************************************************************************************************/

#include <iostream> // for input and output
#include <iomanip> // for using formatting

using namespace std; //for standard library functions, like- cout, etc.

int main ()
{
	//It will set the field-width for output
	const short FIELD_WIDTH = 2;

	//Initializing differnt named, but same type variables for storing the values of various fluid quantities.
	long table_spoon, fluid_ounce, gill, cup, pint, quart, gallon, barrel;

    //It will ask for the number of fluid ounces.
	cout << "How many fluids ounces do you have? ";
	cin >> fluid_ounce;

    //It will convert the value of fluid ounces into other US fluid quantities.
	table_spoon = (fluid_ounce % 4) * 2;
	gill = fluid_ounce / 4;
	cup = gill / 2;
	gill = gill % 2;
	pint = cup / 2;
	cup = cup % 2;
	quart = pint / 2;
	pint = pint % 2;
	gallon = quart / 4;
	quart = quart % 4;
	barrel = gallon / 42;
	gallon = gallon % 42;

    //It will print out the converted result of different US fluid quantities.
	cout << fluid_ounce << " fluid ounces can be divided into:" << endl
	<< setw (FIELD_WIDTH) << left << barrel << "barrel(s)" << endl
	<< setw (FIELD_WIDTH) << left << gallon << "gallon(s)" << endl
	<< setw (FIELD_WIDTH) << left << quart << "quart(s)" << endl
	<< setw (FIELD_WIDTH) << left << pint << "pint(s)" << endl
	<< setw (FIELD_WIDTH) << left << cup << "cup(s)" << endl
	<< setw (FIELD_WIDTH) << left << gill << "gill(s)" << endl
	<< setw (FIELD_WIDTH) << left << table_spoon << "tablespoon(s)" << endl;

	return 0;
}
