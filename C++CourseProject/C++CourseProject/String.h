#pragma once
#ifndef String_H_
#define String_H_

class string
{
public:
	string(void);
	string(const string &);
	string& operator= (const string &);
	//Provide the class with a self-check capability (a check() function that verifies the class invariant).
	~string(void);
};

#endif //String_H_

//Const correctness
//