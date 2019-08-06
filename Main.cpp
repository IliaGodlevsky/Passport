#include <ctime>

#include "Functions.h"

int main()
{
	srand(size_t(time(NULL)));
	Office office(PEOPLE);
	std::generate(office.begin(), 
		office.end(), rand_doc);
	show_office(office);
}