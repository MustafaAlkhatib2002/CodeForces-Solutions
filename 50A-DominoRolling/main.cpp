#include <iostream>
using namespace std;
#include <cmath>



int main() {


    int m, n;
    cin >> m >> n;

    int a = m*n;
    int dominos;

    if (a % 2 == 0) dominos = a/2;

    else if (a % 2 > 0) dominos = (a -(a%2))/ 2;

    cout << dominos << endl;



    return 0;
}
