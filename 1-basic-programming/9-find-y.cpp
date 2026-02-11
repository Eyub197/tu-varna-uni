#include <iostream>

using namespace std;

int main() {
  int x;
  int y;

  cout << "Enter x: " << endl;
  cin >> x;

  if (x < 0) {
    y = 4 * x - 7;
  } else if (x == 0) {
    y = 0;
  } else {
    y = 5 + 3 * x;
  }

  cout << "The value of x is: " << x << endl;
  cout << "The value of y is: " << y << endl;
}
