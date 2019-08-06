#ifndef FUNCT_H_
#define FUNCT_H_

#include <algorithm>
#include <memory>

#include "Passport.h"
#include "Constants.h"

using Document = std::unique_ptr<Passport>;
using Office = std::vector<Document>;

// generates random Visa
Visa rand_visa();

// generates random Passport or ForeignPassport
Document rand_doc();

void show_office(const Office& office, ostream& os);

// random id
inline long rand_id() { return (rand() + 1) * RAND_MAX; }

// random index
inline int idx(int size) { return rand() % size; }

#endif