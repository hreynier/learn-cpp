// Found https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
// Question 3
#include <iostream>

// To work out distance travelled we have the following formula
// d = vt + 1/2(at^2)
// where v = initial velocity, t = time, and a = acceleration
// Since our ball is being dropped, our initial velocity is 0
// and our formula simplifies to
// d = 1/2(at^2), where a == 9.8

// Implementing gravity as 9.8m/s/s
double GRAVITY{9.8};

double getHeight() {
  double inp{};
  std::cout << "Enter the ball's initial height in metres: ";
  std::cin >> inp;

  return inp;
}

// get the distance travelled given a, acceleration, in t, time.
double getDistanceTravelled(double a, int t) {
  int t2 = t * t;
  return (a * t2) / 2;
}

int main() {
  double height{getHeight()};
  if (height <= 0) {
    std::cout << "You selected: " << height << ", which is less than 0\n"
              << "Setting the height to '100m'" << std::endl;
    height = 100;
  }

  double distanceTravelledSoFar{};

  for (int t = 0; t < 6; t++) {
    double dTotal = getDistanceTravelled(GRAVITY, t);
    double dStep = dTotal - distanceTravelledSoFar;
    distanceTravelledSoFar = dTotal;

    height = height - dStep;
    if (height < 0) {
      height = 0;
    }
    std::cout << "At " << t << " seconds, the ball is at height: " << height
              << "\n";
  }
  return 0;
}
