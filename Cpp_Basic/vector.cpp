#include <vector>
#include <iostream>
using namespace std;
int main(void) {
	//���� Ÿ�� ���� ����
	vector<int> myVector = { 11, 22 };
	//push_back()�� �̿��Ͽ� ������ ���Ϳ� �������� �߰�
	myVector.push_back(33);
	myVector.push_back(44);
	cout << "1st element: " << myVector[0] << endl;
	return 0;
}