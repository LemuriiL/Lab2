//
// Created by MrMam on 05.03.2022.
//

#include <iostream>

enum Colours
{
  COLOUR_GRAY,
  COLOUR_PINK,
  COLOUR_BLUE,
  COLOUR_PURPLE,
  COLOUR_RED
};

void printCOLOUR(Colours colour)
{
  std::cout << "The colour is: ";
  switch (colour) {
    case COLOUR_GRAY:
      std::cout << "gray";
      break;
    case COLOUR_PINK:
      std::cout << "pink";
    case COLOUR_BLUE:
      std::cout << "blue";
      break;
    case COLOUR_PURPLE:
      std::cout << "purple";
      break;
    case COLOUR_RED:
      std::cout << "red";
      break;
    default:
      std::cout << "unknown";
      break;
  }
  std::cout << "\n";
}

int main()
{
  printCOLOUR(COLOUR_BLUE);
  return 0;
}
