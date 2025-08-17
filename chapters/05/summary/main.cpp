// https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz/
// Write a program that asks for the full names and ages of two people, and
// prints out the older person's name and age.

#include <iostream>
#include <string>
#include <string_view>

void printNameAndAge(std::string_view n1, std::string_view n2, int a1, int a2) {
  std::cout << n1 << " (age " << a1 << ") is older than " << n2 << " (age "
            << a2 << ") \n";
}

void printOlderPerson(std::string_view name1, std::string_view name2, int age1,
                      int age2) {
  if (age1 > age2) {
    printNameAndAge(name1, name2, age1, age2);
  } else if (age2 > age1) {

    printNameAndAge(name2, name1, age2, age1);
  } else {
    std::cout << name1 << " (age " << age1 << ") is the same age as " << name2
              << " (age" << age2 << ") \n";
  }
}

std::string getName(int n) {
  std::cout << "Enter the name of person #" << n << ": ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  return name;
}

int getAge(std::string_view name) {
  std::cout << "Enter the age of " << name << ": ";
  int age{};
  std::cin >> age;
  return age;
}

int main() {
  constexpr int FIRST = 1;
  constexpr int SECOND = 2;

  std::string n1{getName(FIRST)};
  int a1{getAge(n1)};

  std::string n2{getName(SECOND)};
  int a2{getAge(n2)};

  printOlderPerson(n1, n2, a1, a2);

  return 0;
}
