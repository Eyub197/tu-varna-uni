#include <iostream>

int Suming(int a, int b) { return a + b; }

int main() {
  int a;
  int b;
  int sum;

  std::cout << "Enter first number: ";
  std::cin >> a;

  std::cout << "Enter second number: ";
  std::cin >> b;

  sum = Suming(a, b);

  std::cout << "the sum: " << sum << std::endl;
}
