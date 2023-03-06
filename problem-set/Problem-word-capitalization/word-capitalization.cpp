#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    char firstLetterCapitalized = toupper(s[0]);
    string output = firstLetterCapitalized + s.substr(1, s.length());
    
    cout << output;
 
    return 0;
}