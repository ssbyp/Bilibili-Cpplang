/*************************************************************************
	> File Name: 5.cin.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  4/20 00:29:14 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    double b;
    char c[100];
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    while (cin >> a) {
        cout << "EOF read : a = " << a << endl;
    }
    return 0;
}
