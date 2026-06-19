#include <algorithm>
#include <iostream>
using namespace std;
#include <cmath>
#include <ctype.h>
#include <string>


int main() {

    int eleHouse = 0;
    int eleFriend;
    cin >> eleFriend;

    if (eleFriend % 5 == 0) {
        eleHouse = eleFriend / 5;
    }
    else if (eleFriend % 5 > 0) {
        eleHouse = eleFriend / 5 + 1;
    }
    else if (eleFriend % 4 == 0) {
        eleHouse = eleFriend / 4;
    }
    else if (eleFriend % 4 > 0) {
        eleHouse = eleFriend / 4 + 1;
    }
    else if (eleFriend % 3 == 0) {
        eleHouse = eleFriend / 3;
    }
    else if (eleFriend % 3 > 0) {
        eleHouse = eleFriend / 3 + 1;
    }
    else if (eleFriend % 2 == 0) {
        eleHouse = eleFriend / 2;
    }
    else if (eleFriend % 2 > 0) {
        eleHouse = eleFriend / 2 + 1;
    }


    cout << eleHouse << endl;



    return 0;

}