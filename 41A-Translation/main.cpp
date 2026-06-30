#include <iostream>
using namespace std;


int main() {

    string s1;
    cin >> s1;
    string b;

    for (int i = s1.length() - 1; i >= 0; i--) {
        b.push_back(s1[i]);
    }

    string s2;
    cin >> s2;

    if (b == s2) {cout << "YES";}
    else {cout << "NO";}

    return 0;
}
