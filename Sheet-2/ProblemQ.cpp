#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        string N;
        cin >> N;

        int size = N.size();

        for (int j = size - 1; j >= 0; j--)
        {
            cout << N[j] << " ";
        }

        cout << endl;
    }

    return 0;
}