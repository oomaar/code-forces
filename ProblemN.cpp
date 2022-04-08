#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    
    cin >> ch;
    
	if (ch>=65 && ch<=90) {
	    cout << (char) tolower(ch) << endl;
		
	} else if (ch>=97 && ch<=122) {
	    cout << (char) toupper(ch) << endl;
	}
	
	return 0;
}