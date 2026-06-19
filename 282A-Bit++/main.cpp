#include <iostream>
using namespace std;
#include <cmath>



int main() {

    int a;
    int counter = 0;

    cin >> a;
    string s;

    for (int i = 0; i < a; i++) {

        cin >> s;


        if (s == "x++" || s == "++x" || s == "X++" || s == "++X") counter++;
        else counter--;
    }
    cout << counter << endl;



    return 0;
}

