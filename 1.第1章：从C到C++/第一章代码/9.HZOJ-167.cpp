/*************************************************************************
	> File Name: 9.HZOJ-167.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  4/21 12:14:45 2024
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << a.size() << endl;
    cout << a.find('a') + 1 << endl;
    a.insert(x - 1, b);
    cout << a << endl;
    return 0;
}
