/*************************************************************************
	> File Name: 4.defatul_constructor.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  7/ 5 19:24:59 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "default constructor" << endl;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
        return ;
    }
private:
    int x, y;
};

int main() {
    A a;
    a.output();
    A b{};
    b.output();
    //b();
    return 0;
}

//A b() {
//    cout << "hello function b" << endl;
//    return A();
//}
