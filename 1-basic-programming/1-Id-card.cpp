#include <iostream>

int main() {
  char surname[15];
  char name[15];
  char fathersName[15];
  int personalNumber;
  char gender[2];
  char nationality[15];
  float dateOfBirth;

  std::cout << "Enter your name:" << std::endl;
  std::cin >> name;

  std::cout << "Enter your father's name:" << std::endl;
  std::cin >> fathersName;

  std::cout << "Enter your surname:" << std::endl;
  std::cin >> surname;

  std::cout << "Enter personal Number:" << std::endl;

  std::cin >> personalNumber;

  std::cout << "Enter gender:" << std::endl;

  std::cin >> gender;

  std::cout << "Enter nationality:" << std::endl;

  std::cin >> nationality;

  std::cout << "Enter date of birth:" << std::endl;

  std::cin >> dateOfBirth;

  std::cout << "--------------Card-info---------------" << std::endl;
  std::cout << "| Surname: " << surname << "" << std::endl;
  std::cout << "| Name: " << name << std::endl;
  std::cout << "| Father's name: " << fathersName << std::endl;
  std::cout << "| Personal number: " << personalNumber << " gender: " << gender
            << "|" << std::endl;
  std::cout << "| Nationality: " << nationality << std::endl;
  std::cout << "| Date of birth: " << dateOfBirth << std::endl;

  return 0;
}
