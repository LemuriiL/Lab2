//
// Created by LemuriiL on 08.04.2022.
//

#include <iostream>

int main () {
  using std::cout;
  using std::endl;
  using std::cin;
  cout << "######Упражнение один######\n";
  int X, Y, Z;
  cout << "Введите X => ";
  cin >> X;
  cout << endl;
  cout << "Введите Y => ";
  cin >> Y;
  cout << endl;
  cout << "Введите Z => ";
  cin >> Z;
  cout << endl;

  if (X % 2 == 0 && Y % 2 == 0) {
    cout << "1) condition is true\n";
  } else {
    cout << "1) condition is false\n";
  }

  if (X < 20 && Y > 20) {
    cout << "2) condition is true\n";
  } else if (X > 20 && Y < 20) {
    cout << "2) condition is true\n";
  } else {
    cout << "2) condition is false\n";
  }

  if (X == 0 || Y == 0) {
    cout << "3) condition is true\n";
  } else {
    cout << "3) condition is false\n";
  }

  if (X < 0 && Y < 0 && Z < 0) {
    cout << "4) condition is true\n";
  } else {
    cout << "4) condition is false\n";
  }

  if (X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) {
    cout << "5) condition is true\n";
  } else if (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) {
    cout << "5) condition is true\n";
  } else if (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0) {
    cout << "5) condition is true\n";
  } else {
    cout << "5) condition is false\n";
  }

  if (X > 100 || Y > 100 || Z > 100) {
    cout << "6) condition is true\n";
  } else {
    cout << "6) condition is false\n";
  }

  if (X + Y > Z && X + Z > Y && Y + Z > X) {
    cout << "7) condition is true\n";
  } else {
    cout << "7) condition is false\n";
  }
}

