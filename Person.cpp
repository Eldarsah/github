#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std;

Person::Person()
{
    name = "Eldar";
    surname = "Sachipow";
    year = 2001;
    setName(name);
    setSurname(surname);
    setYear(year);
}
Person::Person(char *name, char *surname,int year)
{
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
    this->surname = new char[strlen(surname)+1];
    strcpy(this->surname,surname);
    setYear(year);
}
Person::Person(const Person &kop)
{
    name = kop.name;
    surname = kop.surname;
    year = kop.year;

}
void Person::setName(char *name)
{
    delete [] this->name;
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
}
void Person::setSurname(char *surname)
{
    delete [] this->surname;
    this->surname = new char[strlen(surname)+1];
    strcpy(this->surname,surname);
}
void Person::setYear(int year)
{
  this->year=year;
}
char Person::getName()
{
    return *name;
}
char Person::getSurname()
{
    return *surname;
}
int Person::getYear()
{
    return year;
}
void Person::print()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
}
Person::~Person()
{
    delete [] name;
    delete [] surname;
}


