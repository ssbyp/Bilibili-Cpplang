/*************************************************************************
	> File Name: 13.HZOJ-172.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  4/22 00:55:18 2024
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    string name;
    for (int i = 0; i < 10; i++) {
        cin >> name;
        s.insert(name);
    }
    for (auto x : s) {
        cout << x << endl;
    }
    return 0;
}
