#include <fstream>
#include <iostream>

using namespace std;

void writeStudentInFile() {
  fstream inputFile("students.dat", ios::out | ios::binary);
}

struct Student {
  char name[15];
  float programminGrade;
  float mathGrade;
};

const int MAX_COUNT_OF_STUDENTS = 3;

int main() { Student students[MAX_COUNT_OF_STUDENTS] = {}; }
