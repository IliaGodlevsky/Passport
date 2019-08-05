#ifndef VISA_H_
#define VISA_H_

#include <string>
class Visa
{
public:
	Visa() {}
	Visa(const std::string& country,
		 int term,
		 char type) :
		 country(country),
		 term(term),
	     type(type) {}
	void show()const;
	~Visa() {}
private:
	std::string country;
	char type;
	int term; // days
};

Visa visa_gen();
#endif
