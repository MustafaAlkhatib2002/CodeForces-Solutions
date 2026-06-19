#include <iostream>
using namespace std;
#include <cmath>

int main() {

        long long m, n, a, f1, f2;
        cin >> m >> n >> a;

      if (m % a == 0) {
          f1 = m / a;
      }

      else f1 = (m / a) +1;

      if (n % a == 0) {
          f2 = n / a;
      }

      else f2 = (n / a) +1;


    cout << f1 * f2 << endl;

        return 0;

}