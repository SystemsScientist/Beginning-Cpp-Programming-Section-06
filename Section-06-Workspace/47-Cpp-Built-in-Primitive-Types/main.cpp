/*
*  Author: Matt Johnson
*  Subject: built-in primitive types
*  Purpose: 
*  Date: 05/16/2023 
* 
*  Notes:
* 
*       - use list notation '{mn}' to catch errors at compile time
*       - change long or long long to int to see an example of
*          overflow
* 
* 
 */

#include <iostream>

using namespace std;

int main(void) {
    
    /************* Character type *************/
    
    char middle_initial {'J'};  // notice the single quotes around characters
    cout << "My middle initial is " << middle_initial << endl;
    
    /************* Integer types *************/
    
    unsigned short int exam_score {95}; // same as unsigned short exam_score {95};
    cout << "\nMy exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries_represented in my meeting." << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida." << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers." << endl;
    
    /************* Floating-point types *************/
    
    float car_payment {401.23};
    cout << "\nMy car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "pi is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number.\n" << endl;
    
    /************* Boolean type *************/
    
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;
    
    /************* Overflow example *************/
    
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "The product of " << value1 << " times " << value2 << " is " << product << endl;
    cout << endl;
    
    return 0;
}
