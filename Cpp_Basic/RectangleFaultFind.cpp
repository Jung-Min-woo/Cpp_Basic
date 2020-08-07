#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Point pos1(2,4);
	Point pos2(5,9);
	Rectangle rec(pos1, pos2);
	rec.ShowRecInfo();
	return 0;
}