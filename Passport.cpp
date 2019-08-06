#include <iostream>

#include "Passport.h"
#include "Constants.h"

void Visa::show()const
{
	std::cout << "Type: " << type << std::endl;
	std::cout << "Country: " << country << std::endl;
	std::cout << "Term: " << term << " days" << std::endl;
}

void Passport::show()const
{
	std::cout << "Name: " << fname << std::endl;
	std::cout << "Surname: " << lname << std::endl;
	std::cout << "Id: " << id << std::endl;
}

void Passport::holder()const
{
	std::cout << "Passport holder\n";
}

void ForeignPassport::show()const
{
	Passport::show();
	std::cout << "Foreign number: " << number << std::endl;
	std::cout << "Visas\n";
	show_visas();
}

void ForeignPassport::show_visas()const
{
	for (size_t i = 0; i < visas.size(); i++)
	{
		std::cout << i + 1 << ". ";
		visas[i].show();
	}
}

void ForeignPassport::holder()const
{
	std::cout << "Foreign passport holder\n";
}