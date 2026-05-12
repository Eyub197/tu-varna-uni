#include <cstddef>
#include <iostream>

struct stack {
  int key;
  stack* next;
} *top = NULL, *pStack = NULL;

struct elem {
  int key;
  elem* next;
} *first = NULL, *last = NULL, *p = NULL;

void push(int num, stack*& temp) {
  pStack = temp;
  temp = new stack;
  temp->key = num;
  temp->next = pStack;
}

int pop(int& num, stack*& temp) {
  if (!temp) return 0;

  num = temp->key;
  pStack = temp;
  temp = temp->next;
  delete pStack;
  return 1;
}

void enqueue(int num, elem*& first, elem*& last) {
  p = last;
  last = new elem;
  last->key = num;
  last->next = NULL;

  if (p != NULL) p->next = last;
  if (first == NULL) first = last;
}

int dequeue(int& num, elem*& first, elem*& last) {
  if (!first) return 0;

  num = first->key;
  p = first;
  first = first->next;
  delete p;

  if (first == NULL) last = first;
  return 1;
}
