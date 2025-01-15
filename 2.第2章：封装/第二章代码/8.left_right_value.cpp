/*************************************************************************
	> File Name: 8.left_right_value.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  7/ 6 15:54:22 2024
 ************************************************************************/

#include <iostream>
using namespace std;

#define TEST(expr) { \
    cout << #expr; \
    f(expr); \
}

void g(int &x) {
    cout << "g : left value" << endl;
    return ;
}

void g(int &&x) {
    cout << "g : right value" << endl;
    return ;
}

void f(int &x) {
    cout << " is left value" << endl;
    g(x);
    return ;
}

void f(int &&x) {
    cout << " is right value" << endl;
    g(std::move(x));
    g(std::forward<int &&>(x));
    return ;
}

void test(const int &x) {
    cout << "test function" << endl;
    return ;
}

int main() {
    int a = 12, b = 13;
    TEST(123); // right
    TEST(12 + 23); // right
    TEST(a + b); // right
    TEST(a);
    TEST(b);
    TEST(a++); // right
    TEST(++a); // left
    (++a) = 1001;
    cout << a << endl;
    test(12 + 23);
    return 0;
}
