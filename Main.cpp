#include <ctime>
#include <vector>
#include <algorithm>
#include <iostream>

#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"
#include "Constants.h"

const int VISAS = 4;
int index() { return rand() % COUNTRIES; }

int main()
{
	srand(unsigned(time(nullptr)));
	long id, number;
	std::string name, surname;
	std::vector<Visa>visas(VISAS);
	std::generate(visas.begin(), visas.end(), visa_gen);
	Passport* doc = nullptr;
	id = rand() + 1234567;
	name = names[index()];
	surname = surnames[index()];
	Passport passport(name, surname, id);
	id = rand() + 1234567;
	name = names[index()];
	surname = surnames[index()];
	number = rand() + 1234567;
	ForeignPassport foreign(name, surname, id, number, visas);
	doc = &passport;
	doc->show();
	doc = &foreign;
	doc->show();
	system("pause");
}
