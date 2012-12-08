#include "String.h"


String::String(void)
{
	str = new char[1];
	str[0] = '\0';
	//str = 
}


String::~String(void)
{
	delete [] str;
}

const char* String::data()
{
	return str; 
}

bool String::StringsAreEqual(const char * a , const char * b)
{
	int i;
	for(i = 0; a[i] != 0 && b[i] != 0; i++)
	{
		if(a[i] != b[i])
			return false;
	}

	if(a[i] != b[i])
		return false;

	return true;
}