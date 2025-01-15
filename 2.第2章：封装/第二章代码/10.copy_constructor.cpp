/*************************************************************************
	> File Name: 10.copy_constructor.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  7/ 6 17:07:33 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : x(0), y(1) {
        cout << this << " default contstructor" << endl;
    }
    A(const A &a) : x(a.x), y(a.y) {
        cout << this << " copy constructor" << endl;
    }
    void operator=(const A &a) {
        cout << this << " operator=" << endl;
        return ;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    const A c;
    A a, b = c;
    b = a;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();
    return 0;
}
