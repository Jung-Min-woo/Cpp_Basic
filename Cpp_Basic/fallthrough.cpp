#include <iostream>
using namespace std;
void print() { cout << "Check" << endl; }
int main(void) {
	int backgroundcolor = 1;
	switch (backgroundcolor) {
	case 1:
		[[fallthrough]];
	case 2: print(); break;
	}
	return 0;
}