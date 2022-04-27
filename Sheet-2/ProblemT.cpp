#include <iostream>
using namespace std;

int main()
{
    int numberOfEntries;
    cin >> numberOfEntries;

    int spaces = numberOfEntries - 1;

    for (int i = 1; i <= numberOfEntries; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int k = 1; k < i * 2; k++)
        {
            cout << "*";
        }

        spaces--;
        cout << endl;
    }

    return 0;
}