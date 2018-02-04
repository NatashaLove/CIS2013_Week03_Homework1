#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int plcard_1, plcard_2, plcard_3;
	int dlcard_1, dlcard_2, dlcard_3;
	char question = 'y';
	char hitStick;

	cout << "Welcome to Black Jack!";
	cout << "Take 2 cards";

	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	int plcard_1 = rand() % 10 + 1;

	cout << "your first card is " << plcard_1;

	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	int plcard_2 = rand() % 10 + 1;

	cout << "your second card is " << plcard_2;










	return 0;
}
