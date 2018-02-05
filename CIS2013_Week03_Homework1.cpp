#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	char question = 'y';
	

	cout << "Welcome to Black Jack!"<< endl;
	cout << "Take 2 cards" << endl;
	cout << endl;

	/* generate number between 1 and 10: */
	int plcard_1 = rand() % 10 + 1;

	cout << "your first card is " << plcard_1 << endl;

	/* generate number between 1 and 10: */
	int plcard_2 = rand() % 10 + 1;

	cout << "your second card is " << plcard_2 << endl;

	/* generate number between 1 and 10: */
	int dlcard_1 = rand() % 10 + 1;

	cout << endl;
	cout << "the dealer's card is " << dlcard_1 << endl;

	cout << endl;

	cout << "Do you want to hit more? y/n" << endl;
	cin >> question;

	if (question == 'y') {
		int plcard_3 = rand() % 10 + 1;

		cout << "your third card is " << plcard_3 << endl;

		cout << " The total value of your hand is " << plcard_1 + plcard_2 + plcard_3 << endl;

		if (plcard_1 + plcard_2 + plcard_3 > 21) {

			cout << "You lose!" << endl;
		}
		else if (plcard_1 + plcard_2 + plcard_3 == 21) {

			cout << "You win!" << endl;
		}

		else if (plcard_1 + plcard_2 + plcard_3 < 21) {
			cout << "Do you want to hit more? y/n" << endl;
			cin >> question;
		}
		if (question == 'y') {
			int plcard_4 = rand() % 10 + 1;

			cout << "your fourth card is " << plcard_4 << endl;

			cout << " The total value of your hand is " << plcard_1 + plcard_2 + plcard_3 + plcard_4 << endl;

			if (plcard_1 + plcard_2 + plcard_3 + plcard_4 > 21) {

				cout << "You lose!" << endl;
			}
			else if (plcard_1 + plcard_2 + plcard_3 + plcard_4 == 21) {

				cout << "You win!" << endl;
			}

			else
				cout << endl;
				cout << "The dealer's turn" << endl;
		}
	}
	
		else {
			/* generate number between 1 and 10: */
			int dlcard_2 = rand() % 10 + 1;

			cout << endl;
			cout << "the dealer's second card is " << dlcard_2 << endl;
		}
	
	cout << endl;

	/* generate number between 1 and 10: */
	int dlcard_2 = rand() % 10 + 1;

	cout << endl;
	cout << "the dealer's second card is " << dlcard_2 << endl;








	return 0;
}
