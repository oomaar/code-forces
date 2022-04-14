#include <iostream>

using namespace std;

int main() {
    long long x, y, z;
    
    cin >> x >> y >> z;
    
    if (x <= y && x <= z) {
        if (y <= z) {
          cout << x << endl;
          cout << y << endl;
          cout << z << endl;
          
        } else if (y >= z) {
          cout << x << endl;
          cout << z << endl;
          cout << y << endl;
        }
    } else if (y <= x && y <= z) {
        if (x <= z) {
          cout << y << endl;
          cout << x << endl;
          cout << z << endl;
          
        } else if (x >= z) {
          cout << y << endl;
          cout << z << endl;
          cout << x << endl;
        }
    } else if (z <= x && z <= y) {
        if (x <= y) {
          cout << z << endl;
          cout << x << endl;
          cout << y << endl;
          
        } else if (x >= y) {
          cout << z << endl;
          cout << y << endl;
          cout << x << endl;
        }
    } else if (x <= y) {
        if (y <= z) {
          cout << x << endl;
          cout << y << endl;
          cout << z << endl;   
        }
    }

    cout << "\n";
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
}