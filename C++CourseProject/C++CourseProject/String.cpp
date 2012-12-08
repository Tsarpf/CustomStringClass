#include "String.h"
#include <string> //Only used for std::exception

String::String(void)
{
	m_String = new char[1];
	m_String[0] = '\0';
}

String::String(const char * str)
{
	m_String = StringCopy(str);
}


String::String(const String & otherString)
{
	m_String = StringCopy(otherString.m_String);
}

char* String::begin()
{
	return &m_String[0];
}

char* String::end()
{
	int endIdx =  StringLength(m_String);
	return &m_String[endIdx];
}

String::~String(void)
{
	delete [] m_String;
}

const char* String::data()
{
	return m_String;  //todo: tests for this function....
}

char* String::operator[](int index)
{
	if(index < 0 || index >= StringLength(m_String))
		throw std::exception("Index out of bounds");

	if(StringLength(m_String) == 1)
		return nullptr;


	return &m_String[index];
}

bool String::operator==(const char * inputString)
{
	return StringsAreEqual(m_String, inputString);
}

String& String::operator=(const String & OtherString)
{
	m_String = StringCopy(OtherString.m_String);

	return *this;
}

String& String::operator=(const char * InputString)
{
	m_String = StringCopy(InputString);

	return *this;
}


void String::Swap(String * A, String * B)
{
	String temporary = *A;

	*B = StringCopy(A->data());
	*A = temporary;
}

char * String::StringCopy(const char * B)
{
	int length = StringLength(B);

	char * a = new char[length];

	for(int i = 0; i < length; i++)
	{
		a[i] = B[i];
	}

	return a;
}


int String::StringLength(const char * InputString)
{
	int i = 0;
	while(InputString[i] != 0)
	{
		i++;
	}
	return i + 1; //+1 comes from null terminator
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