#ifndef ATTENDANCE_MANAGEMENT_H
#define ATTENDANCE_MANAGEMENT_H

#include <iostream>
#include <fstream>
#include <ostream>
#include "Student.hpp"
#include "Course.hpp"



using namespace std;



class AttendanceManagement
{
private:
ofstream archivo;
    
public:
    AttendanceManagement();

    void takeAttendance(Student* student, Course* course, string datetime, bool state);
    void showAttendance();
   
   virtual ~AttendanceManagement();
};

#endif