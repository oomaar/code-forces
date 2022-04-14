#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    
    cin >> a;
    
    if (a >= 97 && a <= 121) {
        cout << (char) tolower(a + 1) << endl;
    } else if (a == 'z') {
        cout << 'a' << endl;
    } else {
        cout << (char) tolower(a + 1) << endl;
    }

    return 0;
}