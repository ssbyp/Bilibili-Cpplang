/*************************************************************************
	> File Name: 34.rvo.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 06:24:14 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << this << " : default constructor" << endl;
    }
    A(const A &a) {
        cout << this << " : copy constructor" << endl;
    }
};

A f() {
    A temp;
    cout << "temp : " << &temp << endl;
    return temp;
}

int main() {
    A a = f();
    cout << "a : " << &a << endl;
    return 0;
}
