/*************************************************************************
	> File Name: 2.public_private.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  7/ 5 11:56:45 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
public:
    string name;
    int age;

    void say1() {
        cout << "say1 : My name is " << name << ", " << age << " years old" << endl;
    }

private:
    string name2;
    int age2;

public :
    void say2() {
        cout << "say2 : My name is " << name << ", " << age << " years old" << endl;
    }
};

int main() {
    People hug;
    hug.name = "Captain Hu";
    hug.age = 50;
    hug.say1();
    hug.say2();
    return 0;
}
