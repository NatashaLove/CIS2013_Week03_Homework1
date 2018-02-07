// The purpose of the program is to make Black Jack game with 10 cards.

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main (){

srand(time(NULL));
	char question = 'y';
	
	int player_total = rand() % 10 + 1; 
	int player_card = rand() % 10 + 1;
	
	int dealer_total = rand() % 10 + 1; 
	int dealer_card = rand() % 10 + 1;
 	
	cout << endl;
	cout << "Welcome to Black Jack!"<< endl;
	cout << endl;
	cout << "Take 2 cards" << endl;
	cout << endl;

	cout << "your first card is " << player_total << endl;

	cout << "your second card is " << player_card << endl;
	cout << endl;
	player_total = player_total + player_card;
	cout << " The total value of your hand is " << player_total << endl;
	
	cout << endl;
	cout << "the dealer's card is " << dealer_total << endl;

	cout << endl;

	cout << "Do you want to hit more? y/n" << endl;
	cin >> question;

	while (question == 'y') {
	int player_card = rand() % 10 + 1;
	
		cout << "your card is " << player_card << endl;
		player_total = player_total + player_card;
		cout << " The total value of your hand is " << player_total << endl;
		
		if (player_total > 21) {

			cout << "You lose!" << endl;
			return 0;
		}
		else if (player_total == 21) {

			cout << "You win!" << endl;
			return 0;
		}
		
		cout << "Do you want to hit more? y/n" << endl;
		cin >> question;
	
	}
	
	cout << endl;
	cout << "the dealer's card is " << dealer_card << endl;
	dealer_total = dealer_total + dealer_card;
	
	cout << " The total value of dealer's hand is " << dealer_total << endl;
	
	
	
int total=500;
	for(int i=1;i<=10;i++){
		total=total+100;
		cout << "Total is " << total << endl;
	}

return 0;

}