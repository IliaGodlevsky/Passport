#include <iostream>

#include "ForeignPassport.h"

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
