#include "Functions.h"

Visa rand_visa()
{
	String state = states[idx(STATES)];
	int term = terms[idx(TERMS)];
	char type = types[idx(TYPES)];
	return Visa(state, term, type);
}

Document rand_doc()
{
	Visas visas(VISAS);
	std::generate(visas.begin(), 
		visas.end(), rand_visa);
	String name = names[idx(NAMES)];
	String surname = surnames[idx(NAMES)];
	if (idx(DOCS) == FOREIGN)
		return Document(new ForeignPassport(name, 
			surname, rand_id(), rand_id(), visas));
	else
		return Document(new Passport(name, 
			surname, rand_id()));
}

void show_office(const Office& office, Output& os)
{
	for (auto& doc : office)
	{
		doc->holder(os); 
		doc->show(os);
		os << std::endl;
	}
}