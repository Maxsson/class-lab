// MultipleInheritance.cpp: 
// Реализация множественного наследования. 
//Просто пример....

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
protected:
	int a;
public:
	A() {
		a = 20;
		cout << "Initializing A\n";
	}
	A(int a) {
		this->a = a;
		cout << "Initializing A\n";
	}
};

class B {
protected:
	int b;
public:
	B() {
		cout << "Initializing B\n";
		b = 10;
	}
	B(int b) {
		this->b = b;
		cout << "Initializing B\n";
	}
};

class C : public A, public B {
public:
	int c;
	C() { cout << "Initializing C\n"; }
	C(int c) : A(10), B(11) {
		this->c = c;
		cout << "Initializing C\n"; }
	int make_ab() { return a+b; }
};
int main()
{
	
	C i(1);
	cout << i.make_ab()<<"\n\n\n\n";
	C ii;
	cout << ii.make_ab() << "\n\n\n\n";
	cin.get();
	return 0;
}