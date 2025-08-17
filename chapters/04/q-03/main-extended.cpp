// Found https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
// Question 3
#include <iostream>

// To work out distance travelled we have the following formula
// d = vt + 1/2(at^2)
// where v = initial velocity, t = time, and a = acceleration
// Since our ball is being dropped, our initial velocity is 0
// and our formula simplifies to
// d = 1/2(at^2), where a == 9.8
//
// This file holds an extended version, where we are calculating the height
// until the ball hits the ground, not just after 5 seconds.

double GRAVITY{9.8};

double getHeight() {
  double inp{};
  std::cout << "Enter the ball's initial height (> 0) in metres: ";
  std::cin >> inp;

  // If user enters a height less than 0, reprompt
  if (inp <= 0.0) {
    return getHeight();
  }

  return inp;
}

double distanceTravelled(double acceleration, double time) {
  return 0.5 * acceleration * time * time;
}

double getCurrentHeight(double height, double time) {
  return height - distanceTravelled(GRAVITY, time);
}

void printCurrentPosition(double initialHeight, double time) {
  double currentHeight{getCurrentHeight(initialHeight, time)};

  if (currentHeight > 0) {
    std::cout << "At " << time
              << " seconds, the ball is at height: " << currentHeight
              << " metres \n";
    time++;
    printCurrentPosition(initialHeight, time);
  } else {
    std::cout << "At " << time << " seconds, the ball is at height: 0 metres\n";
  }
}

int main() {
  double initialHeight{getHeight()};
  printCurrentPosition(initialHeight, 0.0);

  return 0;
}
