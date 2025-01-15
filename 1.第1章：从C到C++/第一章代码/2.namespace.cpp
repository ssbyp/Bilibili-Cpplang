/*************************************************************************
	> File Name: 2.namespace.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  4/19 12:24:03 2024
 ************************************************************************/

#include <iostream>
//using namespace std;

namespace apple {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

namespace banana {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

namespace apple {
    void dec() {
        cnt -= 1;
        return ;
    }
}

namespace {
    int a = 1;
}

#define P(msg) { \
    printf("%s = %d\n", #msg, msg); \
}

int main() {
    P(a);
    std::cout << "hello world" << std::endl;
    apple::cnt += 2;
    P(apple::cnt);
    apple::dec();
    P(apple::cnt);
    using banana::cnt;
    cnt += 100;
    P(apple::cnt);
    P(banana::cnt);
    
    using namespace banana;
    inc();
    P(apple::cnt);
    P(banana::cnt);
    return 0;
}
