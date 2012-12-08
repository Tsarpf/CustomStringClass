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
	void Check();
	~String(void);
	const char* data();
	bool StringsAreEqual(const char *, const char *);
private:
	char* str;
};

#endif //String_H_

//Const correctness
//