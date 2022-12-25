#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string word;

    cin >> word;

    int upperCase = 0;
    int lowerCase = 0;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] < 97) {
            upperCase ++;
        } else {
            lowerCase ++;
        }
    }

    if (upperCase > lowerCase) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 97) {
                word[i] = word[i] - 32;
            }
        }
    } else {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] < 97) {
                word[i] = word[i] + 32;
            }
        }
    }

    cout << word;

    return 0;
}