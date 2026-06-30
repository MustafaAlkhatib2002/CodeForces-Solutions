#include <iostream>
using namespace std;


int main() {

    int numOfFriends, fenceHeight, heights, counter=0;
    cin >> numOfFriends >> fenceHeight;

    for (int i = 0; i < numOfFriends; i++) {
        cin >> heights;

        if (heights <= fenceHeight) {counter++;}
        else counter+=2;
    }

    cout << counter << endl;

    return 0;
}
