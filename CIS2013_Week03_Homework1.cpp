#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	char question = 'y';
	char hitStick;

	cout << "Welcome to Black Jack!"<< endl;
	cout << "Take 2 cards" << endl;


	/* generate secret number between 1 and 10: */
	int plcard_1 = rand() % 10 + 1;

	cout << "your first card is " << plcard_1 << endl;
	


	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	int plcard_2 = rand() % 10 + 1;

	cout << "your second card is " << plcard_2 << endl;










	return 0;
}
