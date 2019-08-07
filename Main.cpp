#include <ctime>
#include <fstream>

#include "Functions.h"

using std::ofstream;
using std::cout;

int main()
{
	srand(size_t(time(NULL)));
	ofstream fout(filename);
	Office office(PEOPLE);
	std::generate(office.begin(), 
		office.end(), rand_doc);
	show_office(office, cout);
	show_office(office, fout);
	fout.close();
	system("pause");
}