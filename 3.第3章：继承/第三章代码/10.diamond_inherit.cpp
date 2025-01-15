/*************************************************************************
	> File Name: 10.diamond_inherit.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六 11/ 9 16:50:06 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    int x;
};

class B : virtual public A {
public :
    void set_x(int x) {
        this->x = x;
        return ;
    }
};

class C : virtual public A {
public :
    int get_x() { return this->x; }
};

class D : public B, public C {};

int main() {
    D obj;
    obj.set_x(3);
    cout << obj.get_x() << endl;
    return 0;
}
