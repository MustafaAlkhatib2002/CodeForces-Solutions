#include <algorithm>
#include <iostream>
using namespace std;
#include <cmath>
#include <ctype.h>
#include <string>


int main() {

    int a, b;
    cin >> a >> b;
    int counter = 0;

    if (b > 10) {
        cout << "Enter a number less than 10 for bob";
        return 0;
    }

    if (a > b) {

        cout <<0;
        return 0;
    }

    if (a == b) {

        cout <<1;
        return 0;
    }

    while (a <= b) {

        a = a*3;
        b = b*2;
        counter++;

        if (a > b) break;
    }

    cout << counter;

    return 0;

}








