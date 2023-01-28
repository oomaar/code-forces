#include<iostream>
#include<string>

using namespace std;

int main () {
    int number;
    cin >> number;

    int result = 0;

    for (int i = 0; i < number; i++) {
        string str;
        cin >> str;

        if (str == "X++" || str == "++X") {
            result++;
        } else {
            result--;
        }
    }

    cout << result << endl;
}