#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int no,char name[]) {
  studentId=no;
  strcpy(studentName,name);
}

// Display StudentId and Name
Student::display() {
  cout<<studentId<<endl;
  count<<name<<endl;
}
