/*************************************************************************
	> File Name: 6.call_father_constructor.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  9/29 22:17:57 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    Base() : x(3) {
        cout << "Base default constructor" << endl;
    }
    Base(int x) : x(x) {
        cout << "Base(int x) constructor" << endl;
    }
    Base(const Base &obj) {
        this->x = obj.x;
        cout << "Base copy constructor" << endl;
    }
    int x;
};

class A : public Base {
public :
    A() : y(4) {
        cout << "A default construtor" << endl;
    }
    A(const A &obj) : Base(obj) {
        this->y = obj.y;
        cout << "A copy constructor" << endl;
    }
    A &operator=(const A &obj) {
        this->y = obj.y;
        this->Base::operator=(obj);
        return *this;
    }
    int y;
};

ostream &operator<<(ostream &out, const A &a) {
    out << "class A ("<< a.x << ", " << a.y << ")";
    return out;
}

int main() {
    A a, c;
    cout << "a : " << a << endl;
    cout << "c : " << c << endl;
    a.x = 1000, a.y = 999;
    c = a;
    cout << "after(c = a) c : " << c << endl;
    A b = a;
    cout << b << endl;
    return 0;
}
