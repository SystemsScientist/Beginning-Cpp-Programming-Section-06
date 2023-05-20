/*
*  Author: Matt Johnson
*  Subject: section challenge solution
*  Purpose: 
*  Date: 05/20/2023 
* 
*  Instructions:
*       
*           Frank's Carpet Cleaning Service
*           Charges:
*                 $25 per small room
*                 $35 per large room
*           Sales tax rate is 6 percent
*           Estimates are valid for 30 days
* 
*           Prompt the user for the number of rooms they would like cleaned
*           and provide an estimate such as:
* 
*           Estimate for carpet cleaning service
*           Number of small rooms: 3
*           Number of large rooms: 1
*           Price per small room: $25
*           Price per large room: $35
*           Cost: $110
*           Tax: $6.6
*           =================================================
*           Total estimate: $116.6
*           This estimate is valid for 30 days
* 
*           Pseudocode:
*               Prompt the user to enter the number of small rooms
*               Prompt the user to enter the number of large rooms
*               Display number of small rooms
*               Display number of large rooms
*               Display price per small room
*               Display price per large room
*           
*               Display cost of rooms: (number of small rooms * price per small room) + (number of large rooms * price per large rooms)
*               Display tax: (number of small rooms * price per small room * tax rate) + (number of large rooms * price per large room * tax rate)
*               Display total estimate: [(number of small rooms * price per small room) + (number of large rooms * price per large rooms)]
*                                                           + [(number of small rooms * price per small room * tax rate) + (number of large rooms * price per large room * tax rate)]
*               Display estimate expiration time
*
 */

#include <iostream>

using namespace std;

int main(void) {
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    
    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days 
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    
    cout << "Price per small room:  $" << price_per_small_room << endl;
    cout << "Price per large room:  $" << price_per_large_room << endl;
    cout << "Cost: $" 
              << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room) 
              << endl;
    cout << "Tax: $" 
              << (number_of_small_rooms * price_per_small_room * sales_tax) + (number_of_large_rooms * price_per_large_room * sales_tax) 
              << endl;
    
    cout << "=================================================" << endl;
    cout << "Total estimate: $" 
              << ((number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room)) 
                                            + ((number_of_small_rooms * price_per_small_room * sales_tax) + (number_of_large_rooms * price_per_large_room * sales_tax)) 
              << endl;
    cout << "This esimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}
