#include <iostream>

using namespace std;

struct elem {
  int key;
  elem* next;
} *start = NULL, *p = NULL;

struct queue {
  int key;
  queue* next;
} *first = NULL, *last = NULL, *queueP = NULL;

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

void enque(int n, queue*& first, queue*& last) {
  queueP = last;
  last = new queue;
  last->key = n;
  last->next = NULL;

  if (queueP != NULL) queueP->next = last;

  if (first == NULL) first = last;
}

void display(elem* temp) {
  cout << "\n Stack ";
  p = temp;

  while (p != NULL) {
    cout << " " << p->key;
    p = p->next;
  }
}

void displayQueue(queue* temp) {
  cout << "\n Queue ";
  queueP = temp;

  while (queueP != NULL) {
    cout << " " << queueP->key;
    queueP = queueP->next;
  }
}

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

void displayDeck(deck* temp) {
  cout << "\n Deck ";
  deckP = temp;

  while (deckP != NULL) {
    cout << " " << deckP->key;
    deckP = deckP->next;
  }
}

int main() {
  int num;

  while (true) {
    cin >> num;
    if (num == 0) break;
    push(num, start);
  }

  while (pop(num, start)) {
    if (num < 0) {
      enque(num, first, last);
    } else if (num > 0 && num % 2 == 0) {
      push_r(num);
    } else if (num > 0 && num % 2 != 0) {
      push_l(num);
    }
  }

  displayQueue(first);
  displayDeck(leftt);
}
