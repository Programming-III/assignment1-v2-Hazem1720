#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

 Person::Person(string name,int id){
this->name=name;
this->id=id;
  }
   void Person::display() {
       cout << name<<id << endl;
   } 
   Student::Student(string major, int yearLevel){
    this->major=major;
this->yearLevel=yearLevel;
   }
   void Student::display() {
         cout << major<<yearLevel << endl;
    }
    Instructor::Instructor(string department,int experienceYears){
        this->department=department;
         this->experienceYears=experienceYears;
    }
   void  Instructor:: display() {
         cout << department<<experienceYears << endl;
    }

Course::Course(string courseName,string courseCode,int maxStudents){
     this->courseName=courseName;
this->courseCode=courseCode;
this->maxStudents=maxStudents;
students[] =new int[maxStudents];
    currentStudents=0
};
void Course:: addStudent(const Student& s){
students[currentStudents]=s;
currentStudents++;

}
void Course:: displayCourseInfo(){
    cout<<courseName<<courseCode<<maxStudents<<currentStudents<<endl;
    for(int i=0;i<currentStudents;i++){
        cout <<students[i]<<endl;
}
class main(){
    Student s =Student ("cs",19);
    Course c =Course("math","19",5);
    Instructor i=Instructor("p",7);
    addStudent(s);
    c.displayCourseInfo();
    s.display()
    i.display();
}
