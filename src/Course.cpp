#include "../include/Course.hpp"



Course::Course()

{
}

Course::~Course()
{
}



void Course::setIdentifier(int Identifier)
{

_Identifier = Identifier;

}


void Course::setName(string Name)
{
_Name = Name;

}


int Course::getIdentifier()
{

return _Identifier;

}


string Course::getName()
{

return _Name;

}








