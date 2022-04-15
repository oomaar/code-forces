#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long e, m, b;

    cin >> e >> m >> b;

    long long result = 0;

    if (e == 0 || b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if ((m >= e && m >= b) || (m >= b && m < e) || (m < b && m >= e))
        {
            result = min(e, b);
            cout << result << endl;
        }
        else if (m < b && m < e)
        {
            result = m;
            e = e - m;
            b = b - m;
            result = result + min(e / 2, b);

            cout << result << endl;
        }
    }

    return 0;
}