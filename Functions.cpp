#include <algorithm>

#include "Functions.h"

Passport* rand_doc()
{
	Visas visas(VISAS);
	std::generate(visas.begin(), 
		visas.end(), rand_visa);
	std::string name = names[idx(NAMES)];
	std::string surname = surnames[idx(NAMES)];
	long id = rand_id();
	long num = rand_id();
	int doc = idx(DOCS);
	if (doc == FOREIGN)
		return new ForeignPassport(name, 
			surname, id, num, visas);
	else
		return new Passport(name, surname, id);
}

Visa rand_visa()
{
	std::string state = country[idx(STATES)];
	int term = terms[idx(TERMS)];
	char type = types[idx(TYPES)];
	return Visa(state, term, type);
}

void show_docs(const Buro& buro)
{
	for (auto doc: buro)
	{
		doc->holder();
		doc->show();
		system("pause");
		system("cls");
	}
}