#include "stdafx.h"
#include "Person.h"
#include <string.h>
#include <iostream>



Person::Person(char* szName, int age)
{
	memset((void*)(this->szName), 0, sizeof(this->szName));
	strcpy(this->szName, szName);
	this->age = age;
}



Person::~Person()
{
}



void Person::Describe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old." << std::endl;
}





void Person::VDescribe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old." << std::endl;
}



Student::Student(char* szName, int age, char* szSchool) :
	Person(szName, age)
{
	memset((void*)(this->szSchool), 0, sizeof(this->szSchool));
	strcpy(this->szSchool, szSchool);
}



Student::~Student()
{
}





void Student::Describe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old."
		<< "I am a student at : " << szSchool << "." << std::endl;
}





void Student::VDescribe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old."
	<< " I am a student at : " << szSchool << "." << std::endl;
}



Employee::Employee(char* szName, int age, char* szEmployer) :
	Person(szName, age)
{
	memset((void*)(this->szEmployer), 0, sizeof(this->szEmployer));
	strcpy(this->szEmployer, szEmployer);
}



Employee::~Employee()
{
}



void Employee::Describe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old."
	<< " I am working at : " << szEmployer << "." << std::endl;
}


void Employee::VDescribe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old."
		<< " I am working at : " << szEmployer << "." << std::endl;
}


PartTimeStudent::PartTimeStudent(char* szName, int age, char* szSchool, char* szEmployer) :
	Person(szName, age),
	Student(szName, age, szSchool),
	Employee(szName, age, szEmployer)
{
}


PartTimeStudent::~PartTimeStudent()
{
}



void PartTimeStudent::VDescribe()
{
	std::cout << "My Name is : " << szName << ". I am : " << age << " years old."
		<< " I am a student at : " << szSchool << "."
		<< " I am working at : " << szEmployer << "." << std::endl;
}
