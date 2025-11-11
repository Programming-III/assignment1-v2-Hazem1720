#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;
class student : public person {
  private:
    string major;
    int yearLevel;
  public:
    void display();
};
#endif
