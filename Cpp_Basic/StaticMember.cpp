#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObject;
public:
	SoSimple() {
		simObject++;
		cout << simObject << "번째 SoSimple Class" << endl;
	}
};
int SoSimple::simObject = 0;

class SoComplex {
private:
	static int cmxObject;
public:
	SoComplex() {
		cmxObject++;
		cout << cmxObject << "번째 SoComplex Class" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObject++;
		cout << cmxObject << "번째 SoComplex Class(Copy)" << endl;
	}
	void VoidEx() { return; }
};
int SoComplex::cmxObject = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;
	
	SoComplex cmx1;
	SoComplex cmx2(cmx1);
	SoComplex().VoidEx();
	SoComplex();
	return 0;
}