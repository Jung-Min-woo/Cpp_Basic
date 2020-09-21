#include <iostream>
#include <charconv>
using namespace std;
int main(void) {
	string out(10, ' ');
	auto [ptr, ec] = to_chars(out.data(), out.data() + out.size(), 12345);
	if (ec == errc()) {
		cout << ptr << endl;
		cout << out << endl;
		cout << out.data() << endl;
		cout << out.size() << endl;
	}
}