#include <iostream>
using namespace std;

class A{
public:
	int a, b;
	A() {
		a = 10;
		b = 11;
	}
	A(int a, int b) {
		this->a = a;
		this->b = b;
	}
	virtual void ab() {
		cout << a + b << " (Класс A)" << endl;
	}
};

class B:public A {
public:
	void ab() {
		a = a + 22;
		cout << a + b << " (Класс B)" << endl;
	}
};

class C:public A {
public:
	void ab() {
		b = b + 18;
		cout << a + b <<  " (Класс C)" << endl;
	}
};



int main() {
	setlocale(LC_ALL, "Russian");
	A* pointA;
	B* pointB = new B;
	C* pointC = new C;

	pointA = pointB;
	pointA->ab();

	pointA = pointC;
	pointA->ab();
	cin.get();
	return 0;
}