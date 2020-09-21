#include <iostream>
#include <string>
int main(void) {
	const std::string toParse = " 123USD";
	size_t index = 0;
	int value = std::stoi(toParse, &index);
	std::cout << toParse << std::endl;
	std::cout << "Parsed Value:" << value << std::endl;
	std::cout << "First non-parsed character:" << toParse[index] << std::endl;
	std::cout << index << std::endl;
	return 0;
}