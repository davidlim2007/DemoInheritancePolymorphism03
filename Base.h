#pragma once
class Base
{
public:
	Base();
	virtual ~Base();

	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
};

class Derived01 : public Base
{
public:
	Derived01();
	virtual ~Derived01();

	virtual void Function1();
	virtual void Function2();
};

class Derived02 : public Base
{
public:
	Derived02();
	virtual ~Derived02();

	virtual void Function2();
	virtual void Function3();
};

class Derived03 : public Base
{
public:
	Derived03();
	virtual ~Derived03();

	virtual void Function1();
};

