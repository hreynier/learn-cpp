// https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/

// Program that asks for users name and age and returns the
// sum of their age and name length

#include <iostream>
#include <string>

int main() {
  const std::string q1{"What is your full name?"};
  const std::string q2{"What is your age?"};
  const std::string ansText{"Your age plus the length of your name is: "};
  std::cout << q1 << '\n';

  std::string name{};
  std::getline(std::cin >> std::ws, name);
  std::cout << q2 << '\n';
  int age{};
  std::cin >> age;
  std::cout << ansText << age + name.length() << '\n';

  return 0;
}
