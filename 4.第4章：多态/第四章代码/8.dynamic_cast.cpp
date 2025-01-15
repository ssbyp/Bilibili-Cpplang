/*************************************************************************
	> File Name: 8.dynamic_cast.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五 12/27 20:39:12 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    virtual ~Base() {}
};
class A : public Base {};
class B : public Base {
public :
    B() : x(999), y(1000) {}
    void output() {
        cout << "x = " << x << ", y = " << y << endl;
        return ;
    }
    int x, y;
};

int main() {
    // A *p1 = new A();
    B *p1 = new B();
    Base *p2 = p1;
    B *p3 = dynamic_cast<B *>(p2);
    if (p3 == nullptr) {
        cout << "convert failed" << endl;
    } else {
        p3->output();
    }
    return 0;
}
