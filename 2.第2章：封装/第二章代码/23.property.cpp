/*************************************************************************
	> File Name: 23.property.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  8/13 16:27:31 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
public :
    People() { cnt += 1; }
    string name;
    static int cnt;
    ~People() { cnt -= 1; }
};
int People::cnt = 0;

void f() {
    People a, b;
    cout << "cnt : " << People::cnt << endl; // 5
    return ;
}

int main() {
    People a, b;
    cout << "cnt : " << People::cnt << endl; // 2
    People c;
    cout << "cnt : " << People::cnt << endl; // 3
    f();
    cout << "cnt : " << People::cnt << endl; // 3
    return 0;
}
