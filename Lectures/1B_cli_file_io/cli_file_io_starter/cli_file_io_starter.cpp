#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(int argc, char *argv[])
{

  std::cout << "What is argc: " << argc << std::endl;
  std::cout << "What is argv(0)" << argv[0] << std::endl;
  //std::cout << "What is argv(1)" << argv[1] << std::endl;
  //std::cout << "What is argv(2)" << argv[2] << std::endl;

  char answer = 'y';

  while (answer == 'y' || answer == 'Y')
  {
    double radius = 4.0;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    bool isNumber = std::cin.good();
    bool isPositive = (radius >= 0);

    if (!isNumber)
    {
      std::cout << "Invalid input type" << std::endl;
      return EXIT_FAILURE;
    }

    if (!isPositive)
    {
      std::cout << "Invalid radius, must be non-negative" << std::endl;
      return EXIT_FAILURE;
    }

    double area = M_PI * std::pow(radius, 2);

    std::cout << "The area is: ";
    std::cout << std::fixed << std::setprecision(5);
    std::cout << area << std::endl;

    std::cout << "Do you want to calculate another area? (y/n): ";
    std::cin >> answer;
  }

  return EXIT_SUCCESS;
}