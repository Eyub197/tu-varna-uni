#include <cstddef>
#include <iostream>

using namespace std;

struct elem {
  int key;
  elem* next;
} *start = NULL, *p = NULL;

void push(int n, elem*& temp) {
  p = temp;
  temp = new elem;
  temp->key = n;
  temp->next = p;
}

int pop(int& n, elem*& temp) {
  if (temp) {
    n = temp->key;
    p = temp;
    temp = temp->next;
    delete p;
    return 1;
  } else {
    return 0;
  }
}

void display(elem* temp) {
  cout << "\n Stack ";
  p = temp;

  while (p != NULL) {
    cout << " " << p->key;
    p = p->next;
  }
}

int main() {
  int num;
  elem *startEven = NULL, *startOdd = NULL;

  while (true) {
    cin >> num;
    if (num == 0) break;
    push(num, start);
  }

  display(start);

  while (pop(num, start)) {
    if (num % 2 == 0) {
      push(num, startEven);
    } else {
      push(num, startOdd);
    }
  }

  display(startEven);
  display(startOdd);

  return 0;
}
