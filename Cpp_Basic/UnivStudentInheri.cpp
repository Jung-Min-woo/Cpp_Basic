#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	int age;
	char name[50];
public:
	Person(const char* myname, int myage) : age(myage) {
		strcpy_s(name, myname);
	}
	void WhatisYoutName() const{
		cout << "My name is" << name << endl;
	}
	void HowOldAreYou() const {
		cout << "My age is " << age << endl;
	}
};
class UnivStudent :public Person {
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myname, myage) {
		strcpy_s(major, mymajor);
	}
	void WhoAreYou() const {
		WhatisYoutName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};
int main(void) {
	UnivStudent ustd1("Lee", 22 ,"Computer eng.");
	ustd1.WhoAreYou();
	UnivStudent utsd2("Yoon", 21, "Eletronic eng.");
	utsd2.WhoAreYou();
	return 0;
}