#pragma once
#ifndef String_H_
#define String_H_

class String
{
public:
	//Constructors
	String(void);
	String(const String &);
	String(const char *);
	String& operator= (const String &);
	String& operator= (const char *);
	bool operator==(const char *);
	
	//Static String functions
	static int StringLength(const char *);

	static char * StringCopy( const char *);

	static bool StringsAreEqual(const char * a, const char * b);
	//Provide the class with a self-check capability (a check() function that verifies the class invariant).
	void Check();
	~String(void);
	const char* data();
private:
	char* m_String;
};

#endif //String_H_

//Const correctness
//