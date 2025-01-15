/*************************************************************************
	> File Name: 17.new_delete.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/ 7 17:39:15 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A(string msg) {
        cout << msg << " constructor" << endl;
    }
    ~A() {
        cout << "destrutor" << endl;
    }
};

int main() {
    A *malloc_a = (A *)malloc(sizeof(A));
    free(malloc_a);
    A *new_a   = new A("new");
    delete new_a;
    return 0;
}
