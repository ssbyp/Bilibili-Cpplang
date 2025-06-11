/*************************************************************************
	> File Name: 1.template_function.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  3/18 07:08:41 2025
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T, typename U>
void Print(T a, U b) {
    cout << a << " " << b << endl;
    return ;
}

int main() {
    cout << add(3, 4) << endl;
    cout << add(3.4, 5.2) << endl;
    cout << add<double>(3, 3.4) << endl;
    Print(3, 'c');
    return 0;
}
