#ifndef PASS_H_
#define PASS_H_
#include <string>
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
#endif