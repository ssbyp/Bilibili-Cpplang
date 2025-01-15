/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  7/ 6 17:37:44 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Array {
public :
    Array() : n(10), data(new int[n]) {
        cout << this << " default constructor" << endl; 
        for (int i = 0; i < n; i++) data[i] = 0;
    }
    Array(const Array &a) : n(a.n), data(new int[n]) {
        cout << this << " copy constructor" << endl;
        for (int i = 0; i < a.n; i++) {
            data[i] = a.data[i];
        }
    }
    Array(Array &&a) : n(a.n), data(a.data) {
        cout << this << " move constructor" << endl;
        a.n = 0;
        a.data = nullptr;
    }
    void set(int ind, int val) { data[ind] = val; }
    int size() { return n; }
    void output() {
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        return ;
    }
    Array duplicate() {
        return Array(*this);
    }
    ~Array() {
        cout << this << " destructor" << endl;
        if (n == 0) return ;
        delete[] data;
        return ;
    }
    
private:
    int n, *data;
};

int main() {
    Array a, b = a.duplicate();
    Array c;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    Array d = std::move(c);
    return 0;
}
