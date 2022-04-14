#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    float a;   
    cin >> a;
    
    int x = ceil(a);
    
    if ( x == a) {
        cout << "int" << " " << x << endl;
    } else {
        cout << "float" << " " << int(a) << " " << a - int(a) << endl;
    }
    
    return 0;
}