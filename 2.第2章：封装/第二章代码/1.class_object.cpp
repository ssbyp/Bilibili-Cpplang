/*************************************************************************
	> File Name: 1.class_object.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  7/ 5 10:50:46 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Cat {};
class Dog {};
class People {
public :
    string name;
    int age;

    void say() {
        cout << "My name is " << name << ", " << age << " years old."<< endl;
        return ;
    }
};

int main() {
    Cat garfiled;
    Dog odie1, odie2;
    People hug, song;

    hug.name = "Captain Hu";
    hug.age  = 50;
    hug.say();
    
    song.name = "Captain Song";
    song.age  = 32;
    song.say();
    return 0;
}
