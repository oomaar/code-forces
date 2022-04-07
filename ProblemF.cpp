#include <iostream>
using namespace std;

int main()
{
    long long N, M, sum;

    cin >> N >> M;

    long long lastN = N % 10;
    long long lastM = M % 10;

    sum = lastM + lastN;
    cout << sum << endl;

    return 0;
}