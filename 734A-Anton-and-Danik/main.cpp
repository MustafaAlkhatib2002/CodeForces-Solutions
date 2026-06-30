#include <iostream>
using namespace std;


int main() {

    int num;
    cin>>num;

    int countA = 0;
    int countD = 0;



    for (int i = 0; i < num; i++) {
        char s;
        cin>>s;

        if (s == 'A') {countA++;}
        else if (s == 'D') {countD++;}
    }


    if (countA > countD) {cout << "Anton" << endl;}
    else if (countA < countD) {cout << "Danik" << endl;}
    else {cout << "Friendship" << endl;}



    return 0;
}
