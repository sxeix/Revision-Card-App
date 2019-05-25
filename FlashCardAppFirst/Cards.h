#pragma once
#include <vector>
#include <string>
#include "Fact.h"
using namespace std;

class Cards
{
public:
	Cards();
	//~Cards();
	vector<Fact> arr;
	void setCards();
	vector<Fact> getArray();
	void insert(Fact x);
	void displayCards();
	void writeFact(string question, string answer);
	int getIndex();

};

