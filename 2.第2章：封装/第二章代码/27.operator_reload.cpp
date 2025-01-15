/*************************************************************************
	> File Name: 27.operator_reload.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 02:50:14 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    A &operator*=(int c) {
        x *= c, y *= c;
        return *this;
    } 
    int x, y;
};

A operator+(A a, A b) {
    return A(a.x + b.x, a.y + b.y);
}

ostream &operator<<(ostream &out, const A &a) {
    out << "operator<< : (" << a.x << ", " << a.y << ")";
    return out;
}

int main() {
    A a(3, 4), b(7, 10);
    A c = a + b;
    cout << c << " : end" << endl;
    (c *= 3) *= 2;
    cout << c << endl;
    int n = 2;
    (n *= 3) *= 4;
    cout << "n = " << n << endl;
    return 0;
}
