#include <iostream>

using namespace std;

int main()
{
    int N, div, flag = 0;
    cin >> N;

    div = N / 2;

    for (int i = 2; i <= div; i++)
    {
        if (N % i == 0)
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "YES" << endl;
    }

    return 0;
}