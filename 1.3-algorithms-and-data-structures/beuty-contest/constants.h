#include <cstddef>

#ifndef CONSTANTS_H
#define CONSTANTS_H

const int MAX_NUM_OF_CONTESTANTS = 30;

const int NAME_MIN = 2;
const int NAME_MAX = 50;

const int GENDER_LENGTH = 2;

struct Contestant {
  int number;
  char name[NAME_MAX];
  int age;
  char gender[GENDER_LENGTH];
  struct Contestant* next;
};

#endif /* CONSTANTS_H */
