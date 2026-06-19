#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int count = 0;

        for (int i = 1; i <= w; i++) {
            count += k * i;
        }

    if (count <= n) {
        cout <<0;
    }

        else {
            cout << count - n;
        }

    return 0;


}