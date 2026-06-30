#include <iostream>
using namespace std;


int main() {

    int stops;
    int a, b, ans=0, ans1=0;
    cin >> stops;

    for (int i = 0; i < stops; i++) {
        cin >> a >> b;
        ans = (ans - a) + b;

        if (ans > ans1) {
            ans1 = ans;
        }
    }

    cout << ans1 << endl;




    return 0;
}
