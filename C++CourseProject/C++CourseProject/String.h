#pragma once
#ifndef String_H_
#define String_H_

class String
{
public:
	String(void);
	String(const String &);
	String& operator= (const String &);
	//Provide the class with a self-check capability (a check() function that verifies the class invariant).
	~String(void);
};

#endif //String_H_

//Const correctness
//