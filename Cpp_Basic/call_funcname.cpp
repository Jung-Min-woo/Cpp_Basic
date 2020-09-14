#include <iostream>
int addNumbers(int number1, int number2) {
	std::cout << "Entering function : " << __func__ << std::endl;
	return number1 + number2;
}
int main(void) { addNumbers(1,3); }