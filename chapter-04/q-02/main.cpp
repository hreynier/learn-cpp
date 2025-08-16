// Found https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
// Question 2

#include <iostream>

double getUserDouble() {
  double inp{};
  std::cout << "Enter a double: ";
  std::cin >> inp;

  return inp;
}

char getUserSymbol() {
  char inp{};
  std::cout << "Enter a symbol: '+', '-', '*', or '/': ";
  std::cin >> inp;

  return inp;
  if (inp == '+' || inp == '-' || inp == '*' || inp == '/') {
    std::cout << "You entered: " << inp << std::endl;
  } else {
    std::cout << "You entered an invalid symbol: " << inp << std::endl;
  }

  return inp;
}

bool isValidSymbol(char inp) {
  if (inp == '+' || inp == '-' || inp == '*' || inp == '/') {
    std::cout << "You entered: " << inp << std::endl;
    return true;
  } else {
    std::cout << "You entered an invalid symbol: " << inp << std::endl;
    return false;
  }
}

double getAnswer(double first, double second, char symbol) {
  if (symbol == '+') {
    return first + second;
  } else if (symbol == '-') {
    return first - second;
  } else if (symbol == '/') {
    return first / second;
  } else if (symbol == '*') {
    return first * second;
  } else {
    return 0.0;
  }
}

int main() {
  double first{getUserDouble()};
  double second{getUserDouble()};
  char symbol{getUserSymbol()};
  if (isValidSymbol(symbol)) {
    std::cout << first << " " << symbol << " " << second
              << " equals: " << getAnswer(first, second, symbol) << std::endl;
  } else {
    std::cout << "Hmm.. something went wrong!" << std::endl;
    return 1;
  }

  return 0;
}
