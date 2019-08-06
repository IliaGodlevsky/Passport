#include <ctime>
#include "Functions.h"
int main()
{
	srand(size_t(time(nullptr)));
	Office office(PEOPLE); // smart pointers
	generate(office.begin(), 
		office.end(), rand_doc);
	show_office(office);
}