/*************************************************************************
	> File Name: 21.test1.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/ 7 19:25:21 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "construtor" << endl;
    }
    void destroy() {
        delete this;
        return ;
    }

private:
    ~A() {
        cout << "destructor" << endl;
    }
    friend void function_test();
};

void function_test() {
    A a;
    return ;
}

int main() {
    A *pa = new A();
    pa->destroy();
    function_test();
    return 0;
}
