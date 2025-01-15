/*************************************************************************
	> File Name: 32.pointer_object.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 05:11:54 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    int x, y;
};

class Pointer_A {
public :
    Pointer_A(A *p) : p(p) {}
    A *operator->() { return p; }
    A &operator*() { return *p; }
    A *p;
};

ostream &operator<<(ostream &out, const A &a) {
    out << "(" << a.x << ", " << a.y << ")";
    return out;
}

int main() {
    A a;
    Pointer_A p = &a;
    p->x = 3;
    p->y = 4;
    cout << *p << endl;
    return 0;
}
