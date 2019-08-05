#ifndef FOREIGN_H_
#define FOREIGN_H_

#include <vector>

#include "Passport.h"
#include "Visa.h"

class ForeignPassport : public Passport
{
public:
	ForeignPassport() = delete;
	ForeignPassport(const std::string& fname,
					const std::string& lname,
					long id, 
					long number,
					std::vector<Visa>visas) :
					Passport(fname, lname, id),
					number(number),
					visas(visas) {}
	~ForeignPassport() {}
	void show()const;
private:
	long number;
	std::vector<Visa>visas;
	void show_number()const;
	void show_visas()const;
	void msg()const;
};

#endif
