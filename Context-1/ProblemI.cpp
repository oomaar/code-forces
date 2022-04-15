#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int f = 0, l = 0;

    if (n >= 10 && n <= 99)
    {
        f = f + (n / 10);
        l = l + (n % 10);

        if (l == 0)
        {
            cout << "YES" << endl;
        }
        else if (f % l == 0 || l % f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}