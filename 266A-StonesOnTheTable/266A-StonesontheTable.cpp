#include <iostream>
using namespace std;

int main() {


    int numOfStones;
    cin >> numOfStones;

    char colors [numOfStones];
    for (int i = 0; i < numOfStones; i++) {
        cin >> colors[i];
    }

    int counter = 0;

    if (sizeof colors != numOfStones) {return 0;}

    for (int i = 0; i < numOfStones; i++) {
        if (colors[i] != 'R' && colors[i] != 'G' && colors[i] != 'B') {return 0;}

        else if (colors[i] == colors[i+1]) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}