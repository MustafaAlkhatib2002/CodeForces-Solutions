#include <iostream>
using namespace std;



int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {   // 512 511 510 50 4      512 511 510 51 50
         if (n % 10 == 0) {n /= 10;}
         else n--;
    }

    cout << n << endl;
    return 0;
}
