#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long l1, r1, l2, r2, l, r;

    cin >> l1 >> r1 >> l2 >> r2;

    if ((r1 < l2) || (r2 < l1))
    {
        cout << -1 << endl;
    }
    else
    {
        l = max(l1, l2);
        r = min(r1, r2);

        cout << l << " " << r << endl;
    }

    return 0;
}