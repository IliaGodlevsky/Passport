#ifndef CONST_H_
#define CONST_H_

enum { FOREIGN };

// constants for array sizes
enum sizes {
	VISAS = 2, STATES = 8, TERMS = 8, TYPES = 5, 
	NAMES = 10, DOCS = 2, PEOPLE = 10
};

const int terms[TERMS] = { 7,14,30,60,90,180,360,720 };

const char* const filename = "Schedule.txt";

const char* const states[STATES] = { "Russia","Poland",
"USA","Canada","Great Britain","France","Germany","Italy"};

const char types[TYPES] = { 'C','D','A','L','H' };

const char* const names[NAMES] = { "John","Alex", "Dima",
"Donald","Jessica","Sara","Bella","Tom","Gregor","James" };

const char* const surnames[NAMES] = { "Smith","Gold","Gates",
"Obama","Trump","White","Black","Green","Bush","Summers" };

#endif