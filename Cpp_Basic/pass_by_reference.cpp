#include <iostream>
void addOne(int& i) { i++; }
int main(void) { 
	int a = 3;
	addOne(a);
	//addOne(3); 
}