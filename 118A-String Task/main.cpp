#include <iostream>
using namespace std;



int main() {

    string sentence;
    cin >> sentence;

    for (int i = 0; i < sentence.length(); i++) {
        sentence[i] = tolower(sentence[i]);
    }

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'a' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'y' || sentence[i] == 'e') {
            continue;
        }
        cout << '.' <<sentence[i];
    }





    return 0;
}





