#ifndef PASS_H_
#define PASS_H_

#include <string>
#include <vector>
#include <memory>

using String = std::string;

class Visa
{
public:
	Visa() {}
	Visa(const String& country,
		 int term,
		 char type) :
		 country(country),
		 term(term),
		 type(type) {}
	void show()const;
	~Visa() {}
private:
	String country;
	char type;
	int term; // days
};

class Passport
{
public:
	Passport() = delete;
	Passport(const String& fname,
			 const String& lname,
			 long id):
			 fname(fname), 
			 lname(lname), 
			 id(id){}
	virtual void show()const;
	virtual void holder()const;
	virtual ~Passport() {};
private:
	String fname;
	String lname;
	long id;
	void show_name() const;
	void show_surname()const;
	void show_id()const;
};

using Document = std::unique_ptr<Passport>;
using Office = std::vector<Document>;
using Visas = std::vector<Visa>;

class ForeignPassport 
		:public Passport
{
public:
	ForeignPassport() = delete;
	ForeignPassport(const String& fname,
					const String& lname,
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