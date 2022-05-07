#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;


class Student
{
private:
    int _Identifier;
    string _Name;
    string _Surname;
public:
    Student();
    void setIdentifier(int Identifier);
    void setName(string Name);
    void setSurname(string Surname);
    int getIdentifier();
    string getName();
    string getSurname();
    ~Student();
};

#endif