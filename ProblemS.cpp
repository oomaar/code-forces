#include <iostream>
 
using namespace std;
 
int main() {
    double N;
    
    cin >> N;
    
    if(N >= 0 && N <= 25){
        cout << "Interval [0,25]";
    } else if(N > 25 && N <= 50) {
        cout<<"Interval (25,50]";
    } else if(N > 50 && N <= 75) {
        cout << "Interval (50,75]";
    } else if(N > 75 && N <= 100) {
        cout << "Interval (75,100]";
    } else {
        cout << "Out of Intervals";
    }
    
    return 0;
}