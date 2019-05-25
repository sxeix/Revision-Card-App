#pragma once
#include <string>
using namespace std;

class Fact
{
public:
	Fact();
	string question;
	string answer;
	string getQuestion();
	string getAnswer();
	void setQuestion(string x);
	void setAnswer(string y);
};