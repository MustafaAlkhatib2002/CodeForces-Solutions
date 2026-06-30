#include <iostream>
using namespace std;

int main() {

    int children, time;
    cin >> children >> time;

    string s;
    cin >> s;

    while (time --) {
        for (int i = 0; i <= children; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap (s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s;


    return 0;
}
