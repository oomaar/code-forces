#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numberOfLines;
    string word;

    cin >> numberOfLines;

    for (int i = 1; i <= numberOfLines; i++)
    {
        cin >> word;

        int wordLength = word.length();
        if (wordLength <= 10)
        {
            cout << word << endl;
        }
        else
        {
            char firstChar = word[0];
            char lastChar = word[wordLength - 1];

            cout << firstChar << wordLength - 2 << lastChar << endl;
        }
    }

    return 0;
}