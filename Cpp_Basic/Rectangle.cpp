#include "Rectangle.h"
#include <iostream>
using namespace std;
//bool Rectangle::InitMembers(const Point& ul, const Point& lr)
//{
//    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
//        cout << "잘못된 위치정보 전달" << endl;
//        return false;
//    }
//    upLeft = ul;
//    lowRight = lr;
//    return true;
//}
Rectangle::Rectangle(const Point& ul, const Point& lr) : upLeft(ul), lowRight(lr) {}
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) : upLeft(x1, y1), lowRight(x2,y2) {}
void Rectangle::ShowRecInfo() const
{
    cout << "좌상단: " << '[' << upLeft.GetX() << ',' << upLeft.GetY() << ']' << endl;
    cout << "우하단: " << '[' << lowRight.GetX() << ',' << lowRight.GetY() << ']' << endl;

}
