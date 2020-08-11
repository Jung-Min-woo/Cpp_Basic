#include <iostream>
using namespace std;

class SoSimple {
private: int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "Called Copy Constructor!" << endl;
	}
	void ShowData() {
		cout << "num: " << num << endl;
	}
};
void SimpleFuncObj(SoSimple ob) {
	ob.ShowData();
}
int main(void) {
	SoSimple obj(7);
	cout << "Before Called" << endl;
	SimpleFuncObj(obj);
	cout << "After Called" << endl;
	return 0;
}