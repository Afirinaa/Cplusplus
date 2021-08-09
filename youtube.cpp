#include <iostream>
#include <string>

int main()
{
  enum class Seasons{summer, spring, autumn, winter};
  Seasons now = Seasons::winter;
  switch (now)
  {
  case Seasons::summer:
    break;
  case Seasons::spring:
    break;
  case Seasons::autumn:
    break;
  case Seasons::winter:
    std::cout << "stay warm!\n";
    break;
  }
  return 0;
}

