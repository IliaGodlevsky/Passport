#include <iostream>

#include "Passport.h"
#include "Constants.h"

void Passport::show_name() const
{
	std::cout << "Name: " << fname << std::endl;
}

void Passport::show_surname()const
{
	std::cout << "Surname: " << lname << std::endl;
}

void Passport::show_id()const
{
	std::cout << "Id: " << id << std::endl;
}

void Passport::show()const
{
	show_name();
	show_surname();
	show_id();
}