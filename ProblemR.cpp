#include <iostream>
 
using namespace std;
 
int main() {
    long long N, y, m, d;
    
    cin >> N;
    
    y = N / 365;
    m = (N - (365 * y)) / 30;
    d = (N - (365 * y)) - (m * 30);
    
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
 
    return 0;
}