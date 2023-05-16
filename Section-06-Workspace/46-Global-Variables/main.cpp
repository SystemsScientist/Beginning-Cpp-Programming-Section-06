/*
 * Author: Matt Johnson
*  Subject: global and local variables
*  Purpose: 
*  Date: 05/16/2023 
* 
*  Notes:
* 
*       - A global variable can be accessed from anywhere
*          in the file
*       - A local variable can only be accessed from within
*          a function
 * 
 */

#include <iostream>

using namespace std;

int age {16};   // initializes global variable

int main(void) {
    
    int age {18};   // initializes local variable
    
    cout << age << endl;    // prints local variable
    
    return 0;
}
