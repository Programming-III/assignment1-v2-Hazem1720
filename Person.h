#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person{
  private:
    string name;
    int id;

    public:
    void display();
    Person(string name,int id);

};
#endif
