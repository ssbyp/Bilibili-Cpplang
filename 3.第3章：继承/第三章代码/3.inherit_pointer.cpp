/*************************************************************************
	> File Name: 3.inherit_pointer.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  9/29 20:10:56 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    Base(int x, int y) : x(x), y(y) {}
    int x, y;
};

class A : public Base {
public :
    A(int x, int y, int z) : Base(x, y), z(z) {}
    int z;
};

void func1(Base *p) {
    cout << "Base : " << p->x << ", " << p->y << endl; 
    return ;
}

ostream &operator<<(ostream &out, const Base &obj) {
    out << "Base (" << obj.x << ", " << obj.y << ")";
    return out;
}

int main() {
    A a(3, 4, 5);
    func1(&a);
    Base &b = a;
    b.x = 5;
    b.y = 6;
    func1(&a);
    cout << a << endl;
    return 0;
}
