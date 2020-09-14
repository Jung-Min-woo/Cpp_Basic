#include <iostream>
#include <array>
using namespace std;
struct Point { double mX, mY, mZ };
int main(void) {
	Point point;
	point.mX = 1.0, point.mY = 2.0, point.mZ = 3.0;
	auto [x, y, z] = point; // error why?
}