#include "../include/AttendanceManagement.hpp"

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
        
}



void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state){

ofstream archivo;
archivo.open("attendance.csv", ofstream::app);
if(archivo.fail()){


cout<<"Error al crear archivo!"<<endl;

}

else
{

cout<<"Se ha creado correctamente"<<endl;

}



        archivo << "id de Estudiante, ";
        archivo << "Nombre/s.";
        archivo << "Apellido/s";
        archivo << "Id de Materia";
        archivo << "Nombre de Materia, ";
        archivo << "Marca Temporal, ";
        archivo << "Presente\n";



        archivo <<student->getIdentifier()<< ", ";
        archivo <<student->getName()<< ", ";
        archivo <<student->getSurname()<< ", ";
        archivo <<course->getIdentifier()<< ", ";
        archivo <<course->getName()<< ", ";
        archivo <<datetime<<", ";
        archivo <<state<< ",";


       archivo.close();
    }


    void AttendanceManagement::showAttendance(){

    ifstream archivo("attendance.csv");
    if (archivo.is_open())
    cout<<archivo.rdbuf();
    archivo.close();
    }



