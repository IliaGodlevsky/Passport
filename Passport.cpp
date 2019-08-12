#include "Passport.h"
#include "Constants.h"

void Visa::show(Output& os)const
{
	os << "Type: " << type << std::endl;
	os << "Country: " << country << std::endl;
	os << "Term: " << term << " days" << std::endl;
}

void Passport::show(Output& os)const
{
	os << "Name: " << fname << std::endl;
	os << "Surname: " << lname << std::endl;
	os << "Id: " << id << std::endl;
}

void Passport::holder(Output& os)const
{
	os << "Passport holder\n";
}

void ForeignPassport::show(Output& os)const
{
	Passport::show(os);
	os << "Foreign number: " << number << std::endl;;
	os << "Visas\n";
	for (auto& visa : visas) visa.show(os);
}

void ForeignPassport::holder(Output& os)const
{
	os << "Foreign passport holder\n";
}