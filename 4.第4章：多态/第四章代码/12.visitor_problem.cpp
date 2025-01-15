/*************************************************************************
	> File Name: 12.visitor_problem.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  1/ 3 20:53:04 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public :
    virtual void output() = 0;
    virtual ~Base() {}
};
class A : public Base {
public :
    void output() override {
        cout << "Class A" << endl;
        return ;
    }
};
class B : public Base {
public :
    void output() override {
        cout << "Class B" << endl;
        return ;
    }
};
class C : public Base {
public :
    void output() override {
        cout << "Class C" << endl;
        return ;
    }
};

int main() {
    srand(time(0));
    Base *p;
    int flag;
    switch (rand() % 3) {
        case 0: p = new A(); break;
        case 1: p = new B(); break;
        case 2: p = new C(); break;
    }
    // type 1
    p->output();
    
    // type 2
    if (dynamic_cast<A *>(p) != nullptr) {
        cout << "Class A : dynamic_cast" << endl;
    } else if (dynamic_cast<B *>(p) != nullptr) {
        cout << "Class B : dynamic_cast" << endl;
    } else if (dynamic_cast<C *>(p) != nullptr) {
        cout << "Class C : dynamic_cast" << endl;
    }
    return 0;
}
