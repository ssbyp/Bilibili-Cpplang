/*************************************************************************
	> File Name: 2.add.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  3/18 09:49:08 2025
 ************************************************************************/

#include <iostream>
#include <sstream>
using namespace std;

#define P(func) { \
    cout << #func << "=" << func << endl; \
}

template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

void is_type(int a) {
    cout << "a is int" << endl;
    return ;
}
void is_type(double a) {
    cout << "a is double" << endl;
    return ;
}

class A {
public :
    A(int x) : x(x) {}
    int x;
};
class B {
public :
    B(double x = 0) : x(x) {}
    double x;
};

string operator+(const A &a, const B &b) {
    ostringstream ss;
    ss << a.x << "," << b.x;
    return ss.str();
}

int main() {
    // cout << add(3.4, 6) << endl;
    P(add<double>(3.4, 6));
    // T -> 3.4 = double, U -> 6 = int, return -> decltype(double() + int())
    P(add(3.4, 6));
    // T -> 6 = int, U -> 3.4 = double, return -> decltype(int() + double())
    P(add(6, 3.4));
    decltype(3.4 + 6) a;
    is_type(a);

    A a1(9);
    B a2(3.4);
    P(add(a1, a2));
    return 0;
}
