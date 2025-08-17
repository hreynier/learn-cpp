// https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz/
// Write a program that asks for the full names and ages of two people, and
// prints out the older person's name and age.

#include <iostream>
#include <string>
#include <string_view>

void printOlderPerson(std::string_view name1, std::string_view name2, int age1,
                      int age2) {
  if (age1 > age2) {
    std::cout << name1 << " (age " << age1 << ") is older than " << name2
              << " (age" << age2 << ") \n";
  } else if (age2 > age1) {

    std::cout << name2 << " (age " << age2 << ") is older than " << name1
              << " (age" << age1 << ") \n";
  } else {
    std::cout << name1 << "(age " << age1 << ") is the same age as " << name2
              << " (age" << age2 << ") \n";
  }
}

int main() {
  std::string name1{}, name2{};
  int age1{}, age2{};

  std::cout << "Enter the name of person #1: ";
  std::getline(std::cin >> std::ws, name1);
  std::cout << "Enter the name of person #2: ";
  std::getline(std::cin >> std::ws, name2);
  std::cout << "Enter the age of " << std::string_view(name1) << " :";
  std::cin >> age1;
  std::cout << "Enter the age of " << std::string_view(name2) << " :";
  std::cin >> age2;

  printOlderPerson(name1, name2, age1, age2);

  return 0;
}
