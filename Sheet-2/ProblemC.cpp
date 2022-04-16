#include <iostream>
using namespace std;

int main()
{
    int values;

    cin >> values;

    int even = 0, odd = 0, postive = 0, negative = 0;

    for (int i = 1; i <= values; i++)
    {
        int N;

        cin >> N;

        if (N % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (N > 0)
        {
            postive++;
        }
        else if (N < 0)
        {
            negative++;
        }
    }

    cout << "Even:"
         << " " << even << endl;
    cout << "Odd:"
         << " " << odd << endl;
    cout << "Positive:"
         << " " << postive << endl;
    cout << "Negative:"
         << " " << negative << endl;

    return 0;
}