#include <iostream>
using namespace std;
int main(void){
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;
	someInteger *= 2;
	someShort = static_cast<short>(someInteger);
	someLong = someShort * 10000;
	someFloat = someLong + 0.785f;
	someDouble = static_cast<double>(someFloat) / 10,000;
	cout << "Short: " <<someShort << endl;
	cout << "Integer: " <<someInteger << endl;
	cout << "Long: " <<someLong << endl;
	cout << "Float: " << someFloat << endl;
	cout << "Double: " << someDouble << endl;
	return 0;
}