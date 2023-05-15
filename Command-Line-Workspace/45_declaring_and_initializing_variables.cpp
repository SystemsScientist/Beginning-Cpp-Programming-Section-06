/*
 * Author: Matt Johnson
 * Subject: declaring and initializing variables
 * Purpose: program calculates the area of a room
 *          in square feet
 * Date: 05/15/2023
 *
 */

#include <iostream>

using namespace std;

int main(void) {

	// find room width
	cout << "Enter the width of the room: ";
	int room_width {0};
	cin >> room_width;

	// find room length
	cout << "Enter the length of the room: ";
	int room_length {0};
	cin >> room_length;

	cout << "The area of the room is " << room_width * room_length << " square feet." << endl;

	return 0;
}
