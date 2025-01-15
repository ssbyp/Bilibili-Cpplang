/*************************************************************************
	> File Name: 7.initialize_list.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  7/ 6 14:59:56 2024
 ************************************************************************/

#include <iostream>
using namespace std;

namespace test1 {

class A {
public :
    A() : A(1, 1) {}
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

private:
    int x, y;
};

int main() {
    A a(3, 4), b(101, 202), c;
    a.output();
    b.output();
    c.output();
    return 0;
}
} // test1

namespace test2 {

class B {
public :
    B(int x) : x(x) {
        cout << this << " : Class B constructor" << endl;
    }
    int x;
};

class A {
public :
    A() : A(1, 1) {}
    A(int z) : y(z), x(z) {
        cout << "x : " << &x << endl;
        cout << "y : " << &y << endl;
    }
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x.x << ", " << y.x << ")" << endl;
    }

private:
    B x, y;
};

int main() {
    A a(5); // x = 6, y = 5
    a.output();
    return 0;
}

} // test2

namespace test3 {

class B {
public :
    B() {
        cout << this << " default constructor" << endl;
    }
    B(int x) : x(x) {
        cout << this << " : Class B constructor" << endl;
    }
    int x;
};

class A {
public :
    A() : A(1, 1) {}
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x.x << ", " << y.x << ")" << endl;
    }

private:
    B x, y;
};

int main() {
    A a(3, 4);
    a.output();
    return 0;
}

} // test3

int main() {
    // test1::main();
    // test2::main();
    test3::main();
    return 0;
}
