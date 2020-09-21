#include <iostream>
#include <string>
#include <string_view>
using namespace std;
string_view extractExtension(string_view fileName) {
	return fileName.substr(fileName.rfind('.'));
}
int main(void) {
	string fileName = R"(c:\temp\my file.ext)";
	const char* cString = R"(c:\temp\my file.ext)";

	cout << "C++ String: " << extractExtension(fileName) << endl;
	cout << "C String: " << extractExtension(cString) << endl;
	cout << "Literal: " << extractExtension(R"(c:\temp\my file.ext)") << endl;
	return 0;
}