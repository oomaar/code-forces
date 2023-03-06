#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    for (int x = 0; x < s1.size(); x++) {
        int num1 = tolower(s1[x]);
        int num2 = tolower(s2[x]);
        
        if (num1 < num2) {
            cout << -1 << endl;
            return 0;
        } else if (num1 > num2) {
            cout << 1 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
 
    return 0;
}