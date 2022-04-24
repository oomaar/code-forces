#include <iostream>
using namespace std;

bool isLuckyDigit(int digit) {
  return digit == 4 || digit == 7;
}

bool isLucky(int n) {
  while (n > 0) {
    int currentDigit = n % 10;

    if (!isLuckyDigit(currentDigit)) {
      return false;
    }

    n = n / 10;
  }

  return true;
}

int main() {
    int A, B;

    cin >> A >> B;

    bool atLeastOneLuckyNumber = false;

    for (int i = A; i <= B; i++) {
      if (isLucky(i)) {
        cout << i << " ";
        atLeastOneLuckyNumber = true;
      }
    }

    if (!atLeastOneLuckyNumber) {
      cout << "-1";
    }
  
    return 0;
}
