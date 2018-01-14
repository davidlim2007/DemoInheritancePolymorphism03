#include "stdafx.h"
#include "Base.h"
#include <iostream>

Base::Base()
{
}


Base::~Base()
{
}


void Base::Function1()
{
	std::cout << "Base Function1" << std::endl;
}


void Base::Function2()
{
	std::cout << "Base Function2" << std::endl;
}


void Base::Function3()
{
	std::cout << "Base Function3" << std::endl;
}


Derived01::Derived01()
{
}


Derived01::~Derived01()
{
}


void Derived01::Function1()
{
	std::cout << "Derived01 Function1" << std::endl;
}


void Derived01::Function2()
{
	std::cout << "Derived01 Function2" << std::endl;
}


Derived02::Derived02()
{
}


Derived02::~Derived02()
{
}


void Derived02::Function2()
{
	std::cout << "Derived02 Function2" << std::endl;
}


void Derived02::Function3()
{
	std::cout << "Derived02 Function3" << std::endl;
}


Derived03::Derived03()
{
}


Derived03::~Derived03()
{
}


void Derived03::Function1()
{
	std::cout << "Derived03 Function1" << std::endl;
}