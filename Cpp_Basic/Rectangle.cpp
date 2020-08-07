#include "Rectangle.h"
#include <iostream>
using namespace std;
//bool Rectangle::InitMembers(const Point& ul, const Point& lr)
//{
//    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
//        cout << "�߸��� ��ġ���� ����" << endl;
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
    cout << "�»��: " << '[' << upLeft.GetX() << ',' << upLeft.GetY() << ']' << endl;
    cout << "���ϴ�: " << '[' << lowRight.GetX() << ',' << lowRight.GetY() << ']' << endl;

}
