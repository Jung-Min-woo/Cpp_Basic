#include <string>
#include <iostream>
int main(void) {
	using namespace std;
	string myString = "hello "s; // std::string literal ~s
	myString += "there ";
	string myOtherString = myString;
	if (myString == myOtherString) myOtherString[0] = 'H';
	cout << myString << endl;
	cout << myOtherString << endl;
	return 0;
}