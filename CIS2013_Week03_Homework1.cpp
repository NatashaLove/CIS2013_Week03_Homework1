// The purpose of the program is to make Black Jack game with 10 cards.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	char question = 'y';
	/* generate numbers - player's cards - between 1 and 10: */
	int plcard_1 = rand() % 10 + 1;
	int plcard_2 = rand() % 10 + 1;
	int plcard_3 = rand() % 10 + 1;
	int plcard_4 = rand() % 10 + 1;
	int plcard_5 = rand() % 10 + 1;

	/* generate numbers - dealer's cards - between 1 and 10: */
	int dlcard_1 = rand() % 10 + 1;
	int dlcard_2 = rand() % 10 + 1;
	int dlcard_3 = rand() % 10 + 1;

	cout << endl;
	cout << "Welcome to Black Jack!"<< endl;
	cout << endl;
	cout << "Take 2 cards" << endl;
	cout << endl;

	cout << "your first card is " << plcard_1 << endl;

	cout << "your second card is " << plcard_2 << endl;

	cout << endl;
	cout << "the dealer's card is " << dlcard_1 << endl;

	cout << endl;

	cout << "Do you want to hit more? y/n" << endl;
	cin >> question;

	if (question == 'y') {

		cout << "your third card is " << plcard_3 << endl;

		cout << " The total value of your hand is " << plcard_1 + plcard_2 + plcard_3 << endl;

		if (plcard_1 + plcard_2 + plcard_3 > 21) {

			cout << "You lose!" << endl;
			return 0;
		}
		else if (plcard_1 + plcard_2 + plcard_3 == 21) {

			cout << "You win!" << endl;
			return 0;
		}

		else if (plcard_1 + plcard_2 + plcard_3 < 21) {
			cout << "Do you want to hit more? y/n" << endl;
			cin >> question;
		}
		if (question == 'y') {

			cout << "your fourth card is " << plcard_4 << endl;

			cout << " The total value of your hand is " << plcard_1 + plcard_2 + plcard_3 + plcard_4 << endl;

			if (plcard_1 + plcard_2 + plcard_3 + plcard_4 > 21) {

				cout << "You lose!" << endl;
				return 0;
			}
			else if (plcard_1 + plcard_2 + plcard_3 + plcard_4 == 21) {

				cout << "You win!" << endl;
				return 0;
			}

			else if (plcard_1 + plcard_2 + plcard_3 + plcard_4 < 21) {

				cout << "Do you want to hit more? y/n" << endl;
				cin >> question;
			}
			if (question == 'y') {

				cout << "your fifth card is " << plcard_5 << endl;

				cout << " The total value of your hand is " << plcard_1 + plcard_2 + plcard_3 + plcard_4 + plcard_5 << endl;

				if (plcard_1 + plcard_2 + plcard_3 + plcard_4 + plcard_5 == 21) {

					cout << "You win!";
					return 0;
				}
				else if (plcard_1 + plcard_2 + plcard_3 + plcard_4 + plcard_5 > 21) {

					cout << "You lose!";

					return 0;
				}
			}
			else if (question == 'n')
				cout << endl;
				cout << "The dealer's turn" << endl;
			
		}
	}
	else if (question == 'n') {

		cout << endl;
		cout << "the dealer's second card is " << dlcard_2 << endl;
	}

	if (dlcard_1 + dlcard_2 <= 16) {

		cout << endl;
		cout << "the dealer's third  card is " << dlcard_3 << endl;
		cout << " The total value of dealer's hand is " << dlcard_1 + dlcard_2 + dlcard_3 << endl;

		if (dlcard_1 + dlcard_2 + dlcard_3 == 21) {
			cout << "The dealer wins! ";
		return 0;
		}
		else if (dlcard_1 + dlcard_2 + dlcard_3 > 21) {
			cout << "The dealer loses!";
				return 0;
		}

	}
	
	if (((plcard_1 + plcard_2 + plcard_3) > (dlcard_1 + dlcard_2 + dlcard_3)) || ((plcard_1 + plcard_2 + plcard_3 + plcard_4) > (dlcard_1 + dlcard_2 + dlcard_3)) || ((plcard_1 + plcard_2 + plcard_3 + plcard_4 + plcard_5) > (dlcard_1 + dlcard_2 + dlcard_3))) {

		cout << "You win!" << endl;
	}
	else if (((plcard_1 + plcard_2 + plcard_3) <= (dlcard_1 + dlcard_2 + dlcard_3)) || ((plcard_1 + plcard_2 + plcard_3 + plcard_4) <= (dlcard_1 + dlcard_2 + dlcard_3)) || ((plcard_1 + plcard_2 + plcard_3 + plcard_4 + plcard_5)) <= ((dlcard_1 + dlcard_2 + dlcard_3))) {

		cout << "You lose!" << endl;
	}

	return 0;
}
