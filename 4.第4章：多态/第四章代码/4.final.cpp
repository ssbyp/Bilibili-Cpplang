/*************************************************************************
	> File Name: 4.final.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 四 12/ 5 23:28:52 2024
 ************************************************************************/

#include <iostream>
using namespace std;

struct Base {
    virtual void test() {
        cout << "Base" << endl;
        return ;
    }
};

struct A : Base {
    void test() final {
        cout << "A" << endl;
    }
};

struct B : A {
    //void test() override {
    //    cout << "B" << endl;
    //}
};

int main() {
    Base *p = new B();
    p->test();
    return 0;
}
