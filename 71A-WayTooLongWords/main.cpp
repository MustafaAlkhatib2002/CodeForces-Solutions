#include <iostream>
using namespace std;
#include <cmath>

int main() {

    int numberOfLines;
    cin >> numberOfLines;

    for (int   i=0; i<numberOfLines; i++) {

        string name;
        cin >> name;

        if (size(name) > 10) cout << name[0] << size(name) - 2 << name[size(name) -1] << endl;

        else cout << name << endl;
    }

    return 0;

}
 