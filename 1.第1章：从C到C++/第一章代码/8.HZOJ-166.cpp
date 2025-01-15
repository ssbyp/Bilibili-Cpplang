/*************************************************************************
	> File Name: 8.HZOJ-166.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  4/21 12:00:16 2024
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << min((int)a.size(), 100) << endl;
    a.insert(x - 1, b);
    cout << a << endl;
    cout << a.size() - a.rfind('x') << endl;
    return 0;
}
