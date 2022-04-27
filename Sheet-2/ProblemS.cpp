#include <iostream>

using namespace std;

int main () {
  int test;
  cin >> test;
  int oddSum = 0;

  for (int i = 1; i <= test; i++) {
      int x, y;
      cin >> x >> y;
      
      int smallValue = 0;
      int largeValue = 0;
      
      if (x > y) {
          smallValue = smallValue + y;
          largeValue = largeValue + x;
      } else if (y > x) {
          smallValue = smallValue + x;
          largeValue = largeValue + y;
      }
      
      int counterStart = smallValue + 1;
      
	  for (int j = counterStart; j < largeValue; j++) {
	      if (j % 2 == 1) {
		      oddSum = oddSum + j;
		    }
	  }
    }
    
    cout << oddSum << endl;

  return 0;
}