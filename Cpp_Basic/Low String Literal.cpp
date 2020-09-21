/* low string literal.cpp */
#include <iostream>
int main(void) {
	const char* str1 = "Hello \"World\"!";
	const char* str2 = R"(Hello "World"!)";
	
	const char* str3 = "Line1\nLine2";
	const char* str4 = R"(Line1
Line2)";

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
	std::cout << str4 << std::endl;
	return 0;
}