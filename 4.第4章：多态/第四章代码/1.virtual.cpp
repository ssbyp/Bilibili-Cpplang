/*************************************************************************
	> File Name: 1.virtual.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 四 12/ 5 20:25:07 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Animal {
public :
    virtual void run() {
        cout << "I don't know how to run" << endl;
        return ;
    }
};

class Cat : public Animal {
public :
    void run() override {
        cout << "I can run with four legs" << endl;
        return ;
    }
};

int main() {
    Cat c;
    Animal *p = &c;
    c.run();
    p->run();
    return 0;
}
