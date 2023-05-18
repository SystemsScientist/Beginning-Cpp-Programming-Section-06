/*
 * Author: Matt Johnson
 * Subject: sizeof operator
 * Purpose: 
 * Date: 05/18/2023
 *
 * Notes:
 *
 * 	- make sure you include climits for integer types
 * 	- similar information for floating-point numbers
 * 	  is contained in <cfloat>
 *
 */

#include <iostream>
#include <climits>

using namespace std;

int main(void) {

	cout << "\nsizeof information " << endl;
	cout << "==============================\n" << endl;

	cout << "char: " << sizeof(char) << " bytes." << endl;
	cout << "int: " << sizeof(int) << " bytes." << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "short: " << sizeof(short) << " bytes." << endl;
	cout << "long: " << sizeof(long) << " bytes." << endl;
	cout << "long long: " << sizeof(long long) << " bytes." << endl;

	cout << "\n==============================\n" << endl;

	cout << "float: " << sizeof(float) << " bytes." << endl;
	cout << "double: " << sizeof(double) << " bytes." << endl;
	cout << "long double: " << sizeof(long double) << " bytes." << endl;

	// use values defined in <climits>
	cout << "\n==============================\n" << endl;

	cout << "Minimum values: " << endl;
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;

	cout << "\n==============================\n" << endl;

	cout << "Maximum values: " << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl;

	cout << "\n==============================\n" << endl;

	// sizeof can also be used with variable names
	cout << "sizeof using variable names: " << endl;
	int age{21};

	cout << "age is " << sizeof(age) << " bytes." << endl;
	cout << "age is " << sizeof age << " bytes.\n" << endl;

	double wage{22.24};
	cout << "wage is " << sizeof(wage) << " bytes." << endl;
	cout << "wage is " << sizeof wage << " bytes.\n" << endl;

	return 0;
}
