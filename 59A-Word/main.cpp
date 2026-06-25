#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int upperCount = 0;
    int lowerCount = 0;

    for (int i = 0; i < word.length(); i++) {
        if (isupper(static_cast<int>(word[i]))) {
            upperCount++;
        }
        else if (islower(static_cast<int>(word[i]))) {
            lowerCount++;
        }
    }


        if (upperCount > lowerCount) {
            for (int i = 0; i < word.length(); i++) {
                word[i] = toupper(word[i]);
            }
        }

        else if (lowerCount >= upperCount) {
            for (int i = 0; i < word.length(); i++) {
                word[i] = tolower(word[i]);
            }
        }

    cout << word << endl;


        return 0;
    }

