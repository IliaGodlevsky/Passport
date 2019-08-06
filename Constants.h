#ifndef CONST_H_
#define CONST_H_

#include <string>

const long BASE_ID = 859603950L;
const int COUNTRIES = 5;

static const std::string country[COUNTRIES]={
	"Russia","Poland","USA","Canada","Great Britain"
};
static const int terms[COUNTRIES] = { 90,14,180,30,60 };
static const char types[COUNTRIES] = { 'C','D','A','L','H' };
const std::string names[COUNTRIES] = { "John","Alex", "Dima","Donald","Jessica" };
const std::string surnames[COUNTRIES] = { "Smith","Gold","Gates","Obama","Trump" };
#endif