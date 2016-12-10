#include <iostream>

// test de David Müller

using namespace std;

class Figure
{
public:
  Figure() {
    cout << "Figure ";
  }
};

class Line : public virtual Figure
{
private:
  double length;
public:
  Line(double len) : length(len) {
    cout << "L ";
  }
};

class Square : public virtual Figure
{
private:
  double side;
public:
  Square(double side1) : side(side1) {
    cout << "S ";
  }
};

class Parallelepiped : public Square, public Line {
public:
  Parallelepiped(double baseSide, double height) :
    Line(height), Square(baseSide) {
    cout << "P ";
  }
};

int main()
{
  Parallelepiped p(1,2);
  return 0;
}

