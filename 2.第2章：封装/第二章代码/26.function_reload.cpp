/*************************************************************************
	> File Name: 26.function_reload.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 02:35:18 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "add(int, int) : " << a + b << endl;
    return a + b;
}

int add(int a, int b, int c) {
    cout << "add(int, int, int) : " << a + b + c << endl;
    return a + b + c;
}

double add(double a, double b) {
    cout << "add(double, double) : " << a + b << endl;
    return a + b;
}

int main() {
    add(3, 4);
    add(1, 2, 3);
    add(3.4, 5.6);
    return 0;
}
