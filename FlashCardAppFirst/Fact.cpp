#include "Fact.h"
#include <string>
#include <fstream>
using namespace std;


Fact::Fact()
{

}

string Fact::getQuestion() {
	return question;
}

string Fact::getAnswer() {
	return answer;
}

void Fact::setQuestion(string x) {
	question = x;
}

void Fact::setAnswer(string y) {
	answer = y;
}

