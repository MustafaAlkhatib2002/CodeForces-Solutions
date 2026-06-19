#include <iostream>
using namespace std;
#include <cmath>
#include <ctype.h>
#include <string>

int main() {

        string st1, st2;
        cin >> st1 >> st2;

    int s1Total = 0;
    int s2Total =0 ;

       for (int i = 0; i < st1.length(); i++) {

           st1.at(i) = tolower(st1.at(i));

       }

       for (int j = 0; j < st2.length(); j++) {

        st2.at(j) = tolower(st2.at(j));

       }


        for (int i = 0; i < st1.length(); i++) {
            for (int j = 0; j < st2.length(); j++) {

                if (st1.at(i) > st2.at(j)) {
                    s1Total ++;
                }
                else if (st1.at(i) < st2.at(j)) {
                    s2Total ++;
                }
            }

        }

    if (s1Total > s2Total) cout << "1";
    else if (s1Total < s2Total) cout << "-1";
    else cout << "0";


    return 0;



}
