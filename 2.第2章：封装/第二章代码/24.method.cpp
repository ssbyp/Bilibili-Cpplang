/*************************************************************************
	> File Name: 24.method.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  8/13 16:39:47 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
public :
    void say() {
        cout << "say somethig : " << this << endl;
    }
    static void say2() {
        cout << "class method : say somethig" << endl;
        return ;
    }
};

int main() {
    People a;
    a.say();
    a.say2(); // 1
    People::say2(); // 2
    return 0;
}
