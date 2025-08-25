#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int roll;

  // Constructor
  Student(string name, int roll) {
    this->name = name;
    this->roll = roll;
  }

  // Function
  void result() { cout << name << " roll is " << roll + 33 << endl; }
};

int main() { 
    Student habib = {"Habibullah", 21};
    habib.result();
    Student arman = {"Arman", 2};
    arman.result();


    return 0; }