#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char sname[]) {
  studentId=sid;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"student id\t\t:"<<studentId<<endl;
  cout<<"student name\t:"<<name<<endl;
}
