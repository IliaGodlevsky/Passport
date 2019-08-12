#include <ctime>

#include "Functions.h"

int main()
{
	srand(size_t(time(NULL)));
	Infile fout(filename);
	Office office(PEOPLE);
	std::generate(office.begin(), 
		office.end(), rand_doc);
	show_office(office, std::cout);
	show_office(office, fout);
	fout.close();
	system("pause");
}