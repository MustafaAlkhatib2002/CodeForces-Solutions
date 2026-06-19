#include <iostream>
using namespace std;
#include <cmath>

int main() {

        int value;


        for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5; j++) {
                        cin >> value;

                        if (value == 1) {

                                cout << abs(i - 3) + abs(j - 3) << endl;

                                }
                        }
                }
        return 0;
        }
