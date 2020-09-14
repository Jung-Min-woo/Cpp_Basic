#include<iostream>
struct CircleStruct {
	int x, y;
	double radius;
};
class CircleClass {
private:
	int mX, mY, mradius;
public:
	CircleClass(int x, int y, double radius) : mX(x), mY(y), mradius(radius) {}
};
int main(void) {
	CircleClass c1{ 10, 20, 30 };
	CircleStruct c2{ 10, 20, 30 };
	
	CircleClass c3{ 0,0,0 };
	CircleStruct c4{ 0 };
	
	return 0;
}