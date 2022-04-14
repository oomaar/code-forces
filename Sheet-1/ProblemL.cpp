#include <iostream>
using namespace std;

int main() {
    string person1First, person1Second;
    string person2First, person2Second;

    cin >> person1First >> person1Second;
    cin >> person2First >> person2Second;

    if (person1Second == person2Second)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}