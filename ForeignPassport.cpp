#include <iostream>
#include <algorithm>

#include "ForeignPassport.h"
#include "Constants.h"

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
	std::cout << "Foreign passport older\n";
}

Passport* rand_doc()
{
	using namespace std;
	const int FOREIGN = 1;
	const int DOCS = 4;
	vector<Visa>visas(DOCS);
	generate(visas.begin(), visas.end(), visa_gen);
	string name = names[rand_index()];
	string surname = surnames[rand_index()];
	long id = rand_id(BASE_ID);
	long num = rand_id(BASE_ID);
	int doc = rand() % 2;
	if (doc == FOREIGN)
		return new ForeignPassport(name, surname, id, num, visas);
	else
		return new Passport(name, surname, id);
}
