#include <iostream>
using namespace std;

int simObjcnt = 0;
int cmxObjcnt = 0;

class SoSimple {
public:
	SoSimple() {
		simObjcnt++;
		cout << simObjcnt << " ¹øÂ° SoSimple °´Ã¼" << endl;
	}
};
class SoComplex {
public:
	SoComplex() {
		cmxObjcnt++;
		cout << cmxObjcnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObjcnt++;
		cout << cmxObjcnt << " ¹øÂ° SoComplex °´Ã¼" << endl;
	}
};
int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;

}