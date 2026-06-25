#include <iostream>
using namespace std;

int main() {
    string n;
    int fourCount=0, sevenCount=0;
    cin>>n;

        for (int i = 0; i < n.length(); i++) {
            if (n[i] == '4') fourCount++;
            if (n[i] == '7') sevenCount++;
        }

        if (fourCount + sevenCount == 4 || sevenCount + fourCount == 7) {
            cout << "YES";
        }

        else cout << "NO";

        return 0;

    }



