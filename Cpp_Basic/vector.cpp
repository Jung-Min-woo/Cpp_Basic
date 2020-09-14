#include <vector>
#include <iostream>
using namespace std;
int main(void) {
	//정수 타입 벡터 생성
	vector<int> myVector = { 11, 22 };
	//push_back()을 이용하여 생성한 벡터에 정숫값을 추가
	myVector.push_back(33);
	myVector.push_back(44);
	cout << "1st element: " << myVector[0] << endl;
	return 0;
}