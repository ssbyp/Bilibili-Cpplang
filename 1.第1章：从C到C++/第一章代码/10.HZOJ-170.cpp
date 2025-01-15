/*************************************************************************
	> File Name: 10.HZOJ-170.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  4/21 12:26:29 2024
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string olds = "Ban_smoking", news = "No_smoking";
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        do {
            int pos = s.find(olds);
            if (pos == -1) break;
            s.replace(pos, olds.size(), news);
        } while (1);
        cout << s << endl;
    }
    return 0;
}
