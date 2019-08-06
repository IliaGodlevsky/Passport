#include <iostream>

#include "Passport.h"
#include "Constants.h"

using std::endl;

void Visa::show(ostream& os)const
{
	os << "Type: " << type << endl;
	os << "Country: " << country << endl;
	os << "Term: " << term << " days" << endl;
}

void Passport::show(ostream& os)const
{
	os << "Name: " << fname << endl;
	os << "Surname: " << lname << endl;
	os << "Id: " << id << endl;
}

void Passport::holder(ostream& os)const
{
	os << "Passport holder\n";
}

void ForeignPassport::show(ostream& os)const
{
	Passport::show(os);
	os << "Foreign number: " << number << endl;
	os << "Visas\n";
	for (auto& visa : visas) visa.show(os);
}

void ForeignPassport::holder(ostream& os)const
{
	os << "Foreign passport holder\n";
}