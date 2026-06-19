#include <iostream>
using namespace std;
#include <cmath>

int main() {

    int n;
    cin >> n;
    int o = 0;


    for (int i = 1; i <= n; i++) {

        int x,y,z;
        cin >> x >> y >> z;
        int c = 0;

        if (x == 1) c++;
        if (y == 1) c++;
        if (z == 1) c++;

        if (c >= 2) o++;

    }
    cout << o << endl;


    return 0;

}