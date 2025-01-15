/*************************************************************************
	> File Name: 30.function_object.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 04:23:04 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class ADD {
public :
    int operator()(int a, int b) {
        cout << "class ADD function object : ";
        return a + b;
    }
};

int add(int a, int b) {
    cout << "add function run : ";
    return a + b;
}

class CMP {
public :
    CMP(int tag = 0) : tag(tag) {}
    bool operator()(int a, int b) {
        cout << "tag : " << tag << endl;
        return a > b;
    }
    int tag;
};

void output(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return ;
}

int main() {
    ADD add2;
    cout << add(3, 4) << endl;
    cout << add2(3, 4) << endl;
    
    int a[10] = {4, 5, 3, 1, 9, 8, 7, 2, 6, 10};
    sort(a, a + 10, CMP(2333)); // cmp(a, b);
    output(a, 10);
    return 0;
}
