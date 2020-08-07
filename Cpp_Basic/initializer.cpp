#include<iostream>
using namespace std;
class tt {
private:
	int nn1, nn2;
public:
	tt(const int n1, const int n2) : nn1(n1), nn2(n2) {}
	void ShowInfo() { cout << nn1 << " " << nn2 << endl; }
};
int main(void) {
	int n1 = 1;
	int n2 = 3;
	tt t1(1, 2);
	t1.ShowInfo();
	return 0;
}
//int Adder(const int num1, const int num2) {
//	return num1 + num2;
//}
//int main(void) {
//	cout << Adder(3, 4) << endl;
//}