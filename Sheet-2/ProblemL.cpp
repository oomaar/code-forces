#include <iostream>
using namespace std;

int main()
{
    int A, B, x;
    cin >> A >> B;

    for (int i = 1; i <= A && i <= B; i++) 
    {
        if (A % i == 0 && B % i == 0) 
        {
            x = i;
        }
    }
    
    cout << x << endl;
    
    return 0;
}