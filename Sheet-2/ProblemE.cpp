#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int max = 0;

    for (int i = 1; i <= N; i++)
    {
        int numbers;
        cin >> numbers;

        if (numbers > max)
        {
            max = numbers;
        }
    }

    cout << max << endl;

    return 0;
}