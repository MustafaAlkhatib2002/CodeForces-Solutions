#include <iostream>
using namespace std;

int main() {

    int num, count=0;
    cin>>num;

    for (int i = 1; i <= num; i++) {
        int a;
        cin>>a;

        if (a == 1) {count++;}
    }

    if (count > 0) {cout << "HARD" << endl;}
    else {cout << "EASY" << endl;}

    return 0;
}
