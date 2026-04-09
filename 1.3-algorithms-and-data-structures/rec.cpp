#include <iostream>

using namespace std;

int numPow(int, int);
long f(int n);
void rec(int i);
void hanoj(char A, char C, char B, int n);
int fib(int i);
int NGOD(int m, int n);

int main() {
  rec(2);
  return 0;
}

int numPow(int base, int power) {
  if (power == 0) {
    return 1;
  } else {
    return base * numPow(base, power - 1);
  }
}

long f(int n) {
  if (n == 0)
    return 1;
  else
    return n * f(n - 1);
}

void rec(int i) {
  cout << i << "";
  if (i > 0) {
    rec(i - 1);
  }
  cout << i << "";
}

int maxn(int a[], int lf, int rt) {
  int left, right;
  int m = (lf + rt) / 2;
  if (lf == rt) return a[rt];
  left = maxn(a, lf, m);
  right = maxn(a, m + 1, rt);
  if (left > right)
    return left;
  else
    return right;
}

void hanoj(char A, char C, char B, int n) {
  if (n == 1)
    cout << "Move the disk 1 from " << A << " to " << C << endl;
  else {
    hanoj(A, B, C, n - 1);
    cout << "Move the disk " << n << " from " << A << " to " << C << endl;
    hanoj(B, C, A, n - 1);
  }
}

int fib(int i) {
  if (i < 1) return 0;
  if (i == 1) return 1;
  return fib(i - 1) + fib(i - 2);
}

int NGOD(int m, int n) {
  if (n > m)
    return (NGOD(n, m));
  else {
    if (n == 0)
      return (m);
    else
      return (NGOD(n, m % n));
  }
}
