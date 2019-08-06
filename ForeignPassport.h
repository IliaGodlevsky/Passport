#ifndef FOREIGN_H_
#define FOREIGN_H_

#include <vector>

#include "Passport.h"
#include "Visa.h"
#include "Constants.h"

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
	void holder()const;
private:
	long number;
	std::vector<Visa>visas;
	void show_number()const;
	void show_visas()const;
	
};


inline long rand_id(long base) { return rand() * 143 + base; }
inline int rand_index() { return rand() % COUNTRIES; }

Passport* rand_doc();
#endif
