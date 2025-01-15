/*************************************************************************
	> File Name: 9.mult_inherit.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六 11/ 9 16:38:27 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Base1 {};
class Base2 {};
class A : public Base1, protected Base2 {};

class Flyable {
public :
    void fly() {
        cout << "flying in the sky" << endl;
        return ;
    }
};

class Swimmable {
public :
    void swim() {
        cout << "swimming in the water" << endl;
        return ;
    }
};

class Duck : public Flyable, public Swimmable {
public :
    void quack() {
        cout << "Quack, Ga Ga Ga" << endl;
        return ;
    }
};

int main() {
    Duck d;
    d.fly();
    d.swim();
    d.quack();
    return 0;
}
