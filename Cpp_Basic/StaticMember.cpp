#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObject;
public:
	SoSimple() {
		simObject++;
		cout << simObject << "��° SoSimple Class" << endl;
	}
};
int SoSimple::simObject = 0;

class SoComplex {
private:
	static int cmxObject;
public:
	SoComplex() {
		cmxObject++;
		cout << cmxObject << "��° SoComplex Class" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObject++;
		cout << cmxObject << "��° SoComplex Class(Copy)" << endl;
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