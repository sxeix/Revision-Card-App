#include <iostream>
#include <string>
#include "Cards.h"
#include "Fact.h"
using namespace std;

void main() {
	cout << "Index card program\n";
	bool game = true;
	Cards myCards;
	myCards.setCards();
	while (game) {
		cout << "------------------------------------\n";
		cout << "\n" << "1. Test yourself" << endl;
		cout << "\n" << "2. Add a card" << endl;
		cout << "\n" << "3. Display all cards" << endl;
		cout << "\n" << "0. Exit" << endl;
		cout << "\n" << "Select the option by number: ";
		int option;
		cin >> option;
		cin.ignore();
		if (option == 1) {
			int index = myCards.getIndex();
			cout << "\n" << myCards.getArray()[index].getQuestion() << endl;
			cout << "\n" << "PRESS ENTER TO CONTINUE..."<< endl;
			cin.get();
			cout << myCards.getArray()[index].getAnswer() << "\n" << endl;
		}
		else if (option == 2) {
			cout << "\n" << "Enter a new question." << "\n";
			string q;
			getline(cin, q);
			cout << "\n" << "Enter the answer." << "\n";
			string a;
			getline(cin, a);
			myCards.writeFact(q, a);
		}
		else if (option == 3) {
			cout << "------------------------------------\n";
			cout << "\n" << "Current cards:" << "\n";
			myCards.displayCards();
		}
		else if (option == 0) {
			return;
		}
	}
}