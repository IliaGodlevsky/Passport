#include <ctime>
#include <vector>
#include <algorithm>
#include <iostream>

#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"
#include "Constants.h"

const int PEOPLE = 8;
using Buro = std::vector<Passport*>;

int main()
{
	using std::generate;
	srand(unsigned(time(nullptr)));
	Buro docs(PEOPLE);
	generate(docs.begin(), docs.end(), rand_doc);
	for (size_t i = 0; i < PEOPLE; i++)
	{
		docs[i]->holder();
		docs[i]->show();
		system("pause");
		system("cls");
	}
	for (auto doc : docs) delete doc;
}
