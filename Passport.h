#ifndef PASS_H_
#define PASS_H_
#include <string>
#include <vector>

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

class Passport
{
public:
	Passport() = delete;
	Passport(const std::string& fname,
			 const std::string& lname,
			 long id):
			 fname(fname), 
			 lname(lname), 
			 id(id){}
	virtual void show()const;
	virtual void holder()const;
	virtual ~Passport() {};
private:
	std::string fname;
	std::string lname;
	long id;
	void show_name() const;
	void show_surname()const;
	void show_id()const;
};

using Buro = std::vector<Passport*>;
using Visas = std::vector<Visa>;

class ForeignPassport : public Passport
{
public:
	ForeignPassport() = delete;
	ForeignPassport(const std::string& fname,
					const std::string& lname,
					long id,
					long number,
					Visas& visas) :
					Passport(fname, lname, id),
					number(number),
					visas(visas) {}
	~ForeignPassport() {}
	void show()const;
	void holder()const;
private:
	long number;
	Visas visas;
	void show_number()const;
	void show_visas()const;
};
#endif