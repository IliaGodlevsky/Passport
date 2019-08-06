#ifndef FUNCT_H_
#define FUNCT_H_

#include "Passport.h"
#include "Constants.h"

Visa rand_visa();
Passport* rand_doc();

void show_docs(const Buro& buro);

// random id
inline long rand_id() { return (rand() + 1) * RAND_MAX; }
// random index
inline int idx(int size) { return rand() % size; }

#endif