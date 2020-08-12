#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl;
class Boy {
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len) {};
	void ShowYourFriendInfo(Girl& frn);
};
class Girl {
private:
	char phnum[20];
public:
	Girl(const char* num) {
		strcpy(phnum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};
void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "Her Phone Num: " << frn.phnum << endl;
}
void Girl::ShowYourFriendInfo(Boy& frn) {
	cout << "His height: " << frn.height << endl;
}
int main(void) {
	Boy boy(170);
	Girl girl("010-2042-9340");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}