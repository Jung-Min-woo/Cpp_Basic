#include <iostream>
using namespace std;
class Temporary {
private: int num;
public:
	Temporary(int n) : num(n) {
		cout << "Create" <<num<< endl;
	}
	~Temporary() {
		cout << "Delete"<<num << endl;
	}
	void ShowTempInfo() {
		cout << "my name is " << num << endl;
	}
};
int main(void) {
	Temporary(100);
	cout << "aftermake!" << endl << endl;
	Temporary(200).ShowTempInfo();
	cout << "aftermake!" << endl << endl;
	const Temporary &ref = Temporary(300);
	cout << "aftermake!" << endl << endl;
	return 0;
}