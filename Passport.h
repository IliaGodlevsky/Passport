#ifndef PASS_H_
#define PASS_H_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class Visa;

using Output = std::ostream;
using Infile = std::ofstream;
using String = std::string;
using Visas = std::vector<Visa>;

class Visa
{
public:
	Visa() = default;
	Visa(const String& country, 
		int term, char type) :
		country(country), 
		term(term), type(type) {}
	void show(Output& os)const;
private:
	String country;
	char type;
	int term;	// days
};

class Passport
{
public:
	Passport() = delete;
	Passport(const String& fname, 
		const String& lname, long id) :
		fname(fname), lname(lname), id(id) {}
	virtual void show(Output& os)const;
	virtual void holder(Output& os)const;
	virtual ~Passport() {};
private:
	String fname;
	String lname;
	long id;
};

class ForeignPassport : public Passport
{
public:
	ForeignPassport() = delete;
	ForeignPassport(const String& fname, 
		const String& lname,
		long id, long number, Visas& visas) :
		Passport(fname, lname, id),
		number(number), visas(visas) {}
	~ForeignPassport() {}
	void show(Output& os)const override;
	void holder(Output& os)const override;
private:
	long number;
	Visas visas;
};
#endif