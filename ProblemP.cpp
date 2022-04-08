#include <iostream>
using namespace std;

int main()
{
    long long number;
    cin >> number;

    while(number >= 10){
        number = number/10;
    }
    
    if (number % 2 == 0) {
        cout << "EVEN" << endl;
    } else if (number % 2 == 1) {
        cout << "ODD" << endl;
    }
    
    return 0;
}