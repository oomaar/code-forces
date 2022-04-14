#include <iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    int x;
    long double p;
    
    cin >> x >> p;
    
    float percent = float(x)/100;
    long double answer = p / (1 - percent);
    
    cout << fixed << answer << endl;
    
    return 0;
}