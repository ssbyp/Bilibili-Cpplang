/*************************************************************************
	> File Name: 11.virtual_function_table.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  1/ 3 15:33:46 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    virtual void test() {
        cout << "test : Class Base" << endl;
        return ;
    }
    virtual void test2(int x) {
        cout << "test2 : Class Base, " << x << endl;
        return ;
    }
};

class A : public Base {
public :
    void test() override {
        cout << "test : Class A" << endl;
        return ;
    }
    void test2(int x) override {
        cout << this << " test2 : Class A, " << x << ", " << this->y << endl;
        return ;
    }
    int y;
};

typedef void (*funcT)();
typedef void (*funcT2)(void *, int);

int main() {
    A a, a2;
    cout << "virtual table address : " << ((funcT **)(&a))[0] << endl;
    ((funcT **)(&a))[0][0]();

    a.test2(100);
    ((funcT2 **)(&a))[0][1](&a, 100);

    a.y = 123;
    a2.y = 456;
    ((funcT2 **)(&a))[0][1](&a2, 100);
    return 0;
}
