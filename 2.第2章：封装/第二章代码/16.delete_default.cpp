/*************************************************************************
	> File Name: 16.delete_default.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/ 7 17:07:48 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() = delete;
    A(const A &) = default;
    ~A() = default;
};

int main() {
    A a;
    return 0;
}
