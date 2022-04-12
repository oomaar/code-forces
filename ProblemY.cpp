#include <iostream>

using namespace std;

int main()
{
    long long int A, B, C, D;

    cin >> A >> B >> C >> D;

    long long Answer = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;

    if (Answer < 10)
    {
        cout << 0 << Answer << endl;
    }
    else
    {
        cout << Answer << endl;
    }

    return 0;
}