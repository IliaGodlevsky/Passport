#include <ctime>
#include <algorithm>

#include "Passport.h"
#include "Functions.h"
#include "Constants.h"

int main()
{
	srand(unsigned(time(NULL)));
	Buro docs(PEOPLE);
	std::generate(docs.begin(), 
		docs.end(), rand_doc);
	show_docs(docs);
	for (auto doc : docs) delete doc;
}