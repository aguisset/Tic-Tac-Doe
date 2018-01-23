//============================================================================
// Name        : tic_tac_doe.cpp
// Author      : aguisset
// Version     :
// Copyright   : Any part of this project can be use freely
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>

#define RAND_MAX 9 // range of rand() between 1 and 9
#define MAX_ROUND 10
using namespace std;

int computer_move() {
	int random_number = 0;

	random_number = (rand() % RAND_MAX) + 1; // test case needed to see if number between 1 and 9

}
int main() {
	// variables
	int current_move = 0;
	int past_moves[MAX_ROUND] = {0}; // setting every value to 0
	int round = 0;
	// Rules
	cout << "Welcome to Tic Tac Doe Game!" << endl;
	cout << "Here are the rules: " <<endl;
	// Create the structure
	cout << " 1 " << "|" << " 2 " << "|" << " 3 " << endl;
	cout << "---|---|---"<< endl;
	cout << " 4 " << "|" << " 5 " << "|" << " 6  " << endl;
	cout << "---|---|---"<< endl;
	cout << " 7 " << "|" << " 8 " << "|" << " 9  " << endl;

	cout << endl;

	// Player input
	cout << "Where would you like to make your move?" << endl;

	// Infinite loop
	while(true){
		cin >> current_move;

		switch (current_move) {
			case 1:
				//past_moves[round] = current_move;
				// Create the structure
				cout << " x " << "|" << "   " << "|" << "   " << endl;
				cout << "---|---|---"<< endl;
				cout << "   " << "|" << "   " << "|" << "   " << endl;
				cout << "---|---|---"<< endl;
				cout << "   " << "|" << "   " << "|" << "   " << endl;

				// Computer move
				cout << endl;
				cout << "After careful decision the computer has decided to do:" << endl;

				// Player input
				cout << "Where would you like to make your move?" << endl;

				round++;
				break;
			case 2:

				// Create the structure
				cout << "   " << "|" << " x " << "|" << "   " << endl;
				cout << "---|---|---"<< endl;
				cout << "   " << "|" << "   " << "|" << "   " << endl;
				cout << "---|---|---"<< endl;
				cout << "   " << "|" << "   " << "|" << "   " << endl;

				// Computer move
				cout << endl;
				cout << "After careful decision the computer has decided to do:" << endl;

				// Player input
				//cout << "Where would you like to make your move?" << endl;

				round++;
				break;
			default:
				cout << "Invalid input" << endl;
		}

	}

	return 0;
}
