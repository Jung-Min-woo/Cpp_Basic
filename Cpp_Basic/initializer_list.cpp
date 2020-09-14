#include <initializer_list>
#include <iostream>
using namespace std;
int makeSum(initializer_list<int> lst) {
	int total = 0;
	for (int value : lst) total += value;
	return total;
}
int main(void) {
	cout << makeSum({ 1, 2, 3 }) << endl;
	cout << makeSum({ 10, 20, 30, 40 }) << endl;
	return 0;
}