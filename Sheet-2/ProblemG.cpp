#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long long f = 1;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }

        cout << f << endl;
        f = 1;
    }

    return 0;
}