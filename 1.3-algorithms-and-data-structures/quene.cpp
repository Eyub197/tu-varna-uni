#include <cstddef>
#include <iostream>
#include <ostream>

using namespace std;

struct elem {
  int key;
  elem* next;
} *first = NULL, *last = NULL, *p = NULL;

struct deck {
  int key;
  deck* next;
} *leftt = NULL, *rightt = NULL, *deckP = NULL;

void push(int n, elem*& temp) {
  p = temp;
  temp = new elem;
  temp->key = n;
  temp->next = p;
}

void displayDeck(deck* temp) {
  deckP = temp;

  while (p != NULL) {
    cout << " " << p->key;
    p = p->next;
  }
}

void display(elem* temp) {
  p = temp;

  while (p != NULL) {
    cout << " " << p->key;
    p = p->next;
  }
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

void enque(int n, elem*& first, elem*& last) {
  p = last;
  last = new elem;
  last->key = n;
  last->next = NULL;

  if (p != NULL) p->next = last;

  if (first == NULL) first = last;
}

int deque(int& n, elem*& first, elem*& last) {
  if (first) {
    p = first;
    n = first->key;
    first = first->next;

    if (first == NULL) last = first;
    delete p;
    return 1;
  } else {
    return 0;
  }
}
void push_l(int n);  // prototype
void push_r(int n);  // prototype
int pop_l(int& n);   // prototype
int pop_r(int& n);   // prototype

void push_l(int n) {
  deck* p;
  p = leftt;
  leftt = new deck;
  leftt->key = n;
  leftt->next = p;
  if (rightt == NULL) {  // äîáàâÿíå â ïðàçåí äåê
    rightt = leftt;
  }
}

void push_r(int n) {
  deck* p;
  p = rightt;
  rightt = new deck;
  rightt->key = n;
  rightt->next = NULL;
  if (leftt == NULL)  // äîáàâÿíå íà ïúðâè åëåìåíò
    leftt = rightt;
  else
    p->next = rightt;
}

int pop_l(int& n) {
  deck* p;
  if (leftt) {
    n = leftt->key;
    p = leftt;
    leftt = leftt->next;
    if (leftt == NULL) rightt = NULL;
    delete p;
    return 1;
  } else
    return 0;
}

int pop_r(int& n) {
  deck* p;
  if (rightt) {
    n = rightt->key;
    if (leftt == rightt) {
      delete rightt;
      leftt = rightt = NULL;
    } else {
      p = leftt;
      while (p->next != rightt) p = p->next;
      p->next = NULL;
      delete rightt;
      rightt = p;
    }
    return 1;
  } else
    return 0;
}

int main() {
  int num;
  elem* fq1 = NULL;
  elem* lq1 = NULL;
  elem* fq2 = NULL;
  elem* lq2 = NULL;
  elem* stack1Start = NULL;
  elem* stack2Start = NULL;

  do {
    cin >> num;
    if (num != 0) push(num, first);
  } while (num != 0);

  cout << "Stack: ";
  display(first);

  while (pop(num, first)) {
    if (num > 0)
      enque(num, fq1, lq1);
    else
      enque(num, fq2, lq2);
  }

  cout << endl;
  cout << "Quene positive: ";
  display(fq1);
  cout << endl;
  cout << "Quene negative:";
  display(fq2);

  cout << endl;

  while (deque(num, fq1, lq2) || deque(num, fq2, lq2)) {
    if (num % 2 == 0)
      push(num, stack1Start);
    else
      push(num, stack2Start);
  }

  cout << endl;
  cout << "Stack even: ";
  display(stack1Start);
  cout << endl;
  cout << "Stack odd : ";
  display(stack2Start);

  while (pop(num, stack1Start) || pop(num, stack2Start)) {
    if (num % 2 == 0)
      push_r(num);
    else
      push_l(num);
  }

  cout << endl;
  cout << "Deck :";
  displayDeck(rightt);

  return 0;
}
