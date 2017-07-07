#include <iostream>
#include <string>

using namespace std;


int findBrackets(string input) {

	int b1L = input.find("(");
	cout << b1L << endl;

	if(!b1L) {
		return 0;
	}
	else {
		int b1R = input.find (")");
	}


	return 0;
}

int findEndNum(int i, string input, int length) {
	bool cond=true;
	int j = i+1;

	do {
		char ind = input.at(j);
		bool cond = isdigit(ind);
		cout << cond << endl;
		j++;
	}while (cond && j<length);

	int endPos = j-1; //returns position from string start of where to place delim.

	return endPos;
}

int findEndBracket(int i, string input) {

	return 0;
}

int addDelim(int pos, string oldStr) {

	string delim = ",";
	string newStr = oldStr.insert(pos, delim);

	return 0;
}


int strParse(string input) {

	int inputLen = input.length();
	cout << inputLen << endl;

	int i;
	for(i=0;i<inputLen;i++) {
		char ind = input.at(i);
		//cout << ind << endl;

		if(isdigit(ind) && i<inputLen) {
			int endPos = findEndNum(i, input, inputLen);
			input = addDelim(endPos, input);
			cout << input << endl;
			break;
		}
		else if(ind==45) { //check if this comparison is ok (ind is a char!)
			cout << "do something here if minus is identified" << endl;
			break;
		}
		else if(ind==40) {
			findEndBracket(i, input);
			break;
		}
		else {
			cout << "write error code for return -1" << endl;
			return -1;
		}
	}

	return 0;
}


int main() {

	cout << "Calculator Syntax: " << endl;
	cout << "\t\t + [addition]" << endl;
	cout << "\t\t - [subtraction]" << endl;
	cout << "\t\t x [multiplication]" << endl;
	cout << "\t\t / [division]" << endl << endl;

	cout << "\t\t ( ) [brackets]" << endl;
	cout << "\t\t 1-9 [numbers]" << endl;
	cout << "===================================================" << endl;

	string input="557x";
	//cout << "enter:" << flush;
	//cin >> input;

	//findBrackets(input);
	strParse(input);

	return 0;
}
