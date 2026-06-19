#include <algorithm>
#include <iostream>
using namespace std;
#include <cmath>
#include <ctype.h>
#include <string>


// 1,2,3 in ASCII == 49,50,51


int main() {

    string equation;
    cin >> equation;

    int bucket [equation.length()];
    int counter = 0;

    for (int i = 0; i < equation.length(); i+=2) {

        bucket[counter] = equation[i] - '0';
        counter++;

    }

    int n = (equation.length())/2 +1;
    sort (bucket, bucket+n);

    for (int j = 0; j < n; j++) {
        if (j != 0) {
            cout << "+";
        }
        cout << bucket[j];
    }

    return 0;

}