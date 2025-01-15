/*************************************************************************
	> File Name: 31.array_object.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  8/14 04:44:06 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Array {
public :
    Array() : data(new int[10]) {}
    int &operator[](int ind) {
        return data[ind];
    }
    int *data;
};

int main() {
    Array a;
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
