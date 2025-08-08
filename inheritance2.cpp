#include <string.h>
#include<iostream>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void input() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.input();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

