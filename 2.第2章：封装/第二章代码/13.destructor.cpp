/*************************************************************************
	> File Name: 13.destructor.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/ 7 16:07:27 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : data(new int[10]) {
        cout << this << " default construtor" << endl;
    }
    ~A() {
        cout << this << " destructor" << endl;
        delete[] data;
    }

private:
    int *data;
};

int main() {
    A a, *pa = new A();
    cout << "a : " << &a << endl;
    cout << "pa : " << pa << endl;
    delete pa;
    return 0;
}
