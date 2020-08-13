#include <iostream>
using namespace std;

class SoSimple {
public: static int simObjcnt;
public:
	SoSimple() {simObjcnt++;}
};
int SoSimple::simObjcnt = 0;
int main(void) {
	cout << SoSimple::simObjcnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjcnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim1.simObjcnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim2.simObjcnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	return 0;
}