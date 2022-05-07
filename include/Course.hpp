#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;


class Course
{
private:
    int _Identifier;
    string _Name;
public:
    Course();
    virtual ~Course();
    
    int getIdentifier();
    void setIdentifier(int Identifier);
    string getName();
    void setName(string Name);
};

#endif