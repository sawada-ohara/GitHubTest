#include "person.h"

#include <iostream>
#include <assert.h>


using namespace Sawada;
using namespace std;


Person::Person()
{
	name = nullptr;
	age = -1;
}


Person::~Person()
{
}


void Person::SetName(const char* name)
{
	this->name = name;
}


void Person::SetAge(int age)
{
	this->age = age;
}


void Person::Print()
{
	cout << name << "(" << age << ")" << endl;
}