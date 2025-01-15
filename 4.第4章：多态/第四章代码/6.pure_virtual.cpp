/*************************************************************************
	> File Name: 6.pure_virtual.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二 12/24 16:19:06 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Flyable {
public :
    virtual void fly() = 0;
};

class Animal {
public :
    virtual void run() = 0;
};

class Cat : public Animal {
public :
    void run() override {
        cout << "I can run with four legs" << endl;
        return ;
    }
};

class Bat : public Animal, public Flyable {
public :
    void run() override {
        cout << "I can run with two legs" << endl;
        return ;
    }
    void fly() override {
        cout << "I can fly, in the sky" << endl;
        return ;
    }
};

void f1(Flyable &obj) {
    cout << "this is obj : ";
    obj.fly();
    return ;
}

int main() {
    Cat c;
    Bat b;
    f1(b);
    c.run();
    return 0;
}
