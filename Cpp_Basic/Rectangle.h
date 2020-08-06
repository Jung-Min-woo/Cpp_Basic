#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include "Point.h"
class Rectangle {
private:
	Point upLeft, lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif