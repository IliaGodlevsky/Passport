#include <iostream>
#include <cstdlib>

#include "Visa.h"
#include "Constants.h"

void Visa::show()const
{
	std::cout << "Type: " << type << std::endl;
	std::cout << "Country: " << country << std::endl;
	std::cout << "Term: " << term << " days" << std::endl;
}

Visa visa_gen()
{
	std::string state = country[rand() % COUNTRIES];
	int term = terms[rand() % COUNTRIES];
	char type = types[rand() % COUNTRIES];
	return Visa(state, term, type);
}
