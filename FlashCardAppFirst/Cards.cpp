#include "Cards.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Fact.h"

using namespace std;

Cards::Cards()
{

}

vector<Fact> Cards::getArray() {
	return arr;
}

void Cards::insert(Fact x) {
	arr.push_back(x);
}

void Cards::setCards() {
	string line;
	string q;
	string a;
	int p = 1;
	ifstream myFile("fact_list.txt");
	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			if (p % 2 != 0) {
				q = line;
			}
			else {
				a = line;
				Fact tmp;
				tmp.setQuestion(q);
				tmp.setAnswer(a);
				insert(tmp);
			}
			p++;
		}
	}
	myFile.close();
}

void Cards::writeFact(string question, string answer) {
	Fact tmp;
	tmp.setQuestion(question);
	tmp.setAnswer(answer);
	fstream log;
	log.open("fact_list.txt", fstream::app);
	if (log.is_open()) {
		log << tmp.getQuestion() << "\n";
		log << tmp.getAnswer() << "\n";
		insert(tmp);
		log.close();
	}
}

int Cards::getIndex() {				
	return rand() % arr.size();
}

void Cards::displayCards() {
	for (auto x : arr) {
		cout << "Question: " << x.getQuestion() << "\n";
		cout << "Answer: " << x.getAnswer() << "\n";
	}
}
