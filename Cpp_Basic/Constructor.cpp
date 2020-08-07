#include <iostream>
using namespace std;

class SimpleClass {
private:
	int num1, num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0) {
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};
int main(void) {
	SimpleClass sc1(int n1 = 3, int n2 = 5);
	sc1(3, 5);
}
SimpleClass sc1(int n1, int n2 ) {
	SimpleClass r(20,20);
	cout << "Called" << endl;
	return r;
}