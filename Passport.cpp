#include <iostream>

#include "Passport.h"
#include "Constants.h"

void Visa::show()const
{
	std::cout << "Type: " << type << std::endl;
	std::cout << "Country: " << country << std::endl;
	std::cout << "Term: " << term << " days" << std::endl;
}

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

void Passport::holder()const
{
	std::cout << "Passport holder\n";
}

void ForeignPassport::show()const
{
	Passport::show();
	show_number();
	std::cout << "Visas\n";
	show_visas();
}

void ForeignPassport::show_number()const
{
	std::cout << "Foreign number: " << number << std::endl;
}

void ForeignPassport::show_visas()const
{
	for (auto i = visas.begin(); i != visas.end(); i++)
	{
		std::cout << i - visas.begin() + 1 << ". ";
		i->show();
	}
}

void ForeignPassport::holder()const
{
	std::cout << "Foreign passport holder\n";
}