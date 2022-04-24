#include <iostream>
using namespace std;

int main()
{
    char s;
    cin >> s;

    int lines;
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        int times;
        cin >> times;
        while (times--)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}