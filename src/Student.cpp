#include "../include/Student.hpp"


Student::Student()
{

}

Student::~Student()
{
}



void Student::setIdentifier(int Identifier)
{

_Identifier = Identifier;

}


void Student::setName(string Name)
{

_Name = Name;

}


void Student::setSurname(string Surname)
{

_Surname = Surname;

}

int Student::getIdentifier()
{

return _Identifier;


}   


 string Student::getName()
 {

return _Name;

 }
    
    
 string Student::getSurname()
{

return _Surname;
}





