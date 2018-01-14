#pragma once

class Person
{
public:
	Person(char* szName, int age);
	virtual ~Person();

	void Describe();
	virtual void VDescribe();

protected :
	char szName[16];
	int  age;
};

class Student : virtual public Person
{
public :
	Student(char* szName, int age, char* szSchool);
	virtual ~Student();

	void Describe();
	virtual void VDescribe();

protected:
	char szSchool[16];
};

class Employee : virtual public Person
{
public :
	Employee(char* szName, int age, char* szEmployer);
	virtual ~Employee();

	void Describe();
	virtual void VDescribe();

protected:
	char szEmployer[16];
};

class PartTimeStudent : virtual public Person,
	virtual public Student,
	virtual public Employee
{
public :
	PartTimeStudent(char* szName, int age, char* szSchool, char* szEmployer);
	virtual ~PartTimeStudent();

	virtual void VDescribe();
};

