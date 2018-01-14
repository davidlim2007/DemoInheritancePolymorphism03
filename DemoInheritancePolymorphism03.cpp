// DemoInheritencePolymorphism03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Base.h"



void DoTest()
{
	Person* pPerson = new Person("John", 23);
	pPerson->Describe();
	delete pPerson;
	pPerson = NULL;

	pPerson = new Student("John", 23, "NTU");
	pPerson->Describe();
	delete pPerson;
	pPerson = NULL;
}





void DoTest2()
{
	Person* pPerson = new Person("John", 23);
	pPerson->VDescribe();
	delete pPerson;
	pPerson = NULL;

	pPerson = new Student("John", 23, "NTU");
	pPerson->VDescribe();
	delete pPerson;
	pPerson = NULL;

	pPerson = new PartTimeStudent("John", 23, "NTU", "Seven-Eleven");
	pPerson->VDescribe();
	delete pPerson;
	pPerson = NULL;

	PartTimeStudent* pPTS = new PartTimeStudent("John", 23, "NTU", "Seven-Eleven");

	pPTS->VDescribe();
	pPTS->::Person::VDescribe();
	pPTS->::Student::VDescribe();
	pPTS->::Employee::VDescribe();
}

void DoTest3()
{
	Base* pBase = new Base();
	pBase->Function1();
	delete pBase;
	pBase = NULL;

	pBase = new Derived01();
	pBase->Function1();
	pBase->Function3();
	delete pBase;
	pBase = NULL;
}

int main()
{
	DoTest();
	DoTest2();
	DoTest3();

    return 0;
}

