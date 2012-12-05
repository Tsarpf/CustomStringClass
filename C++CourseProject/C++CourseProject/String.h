#pragma once
#ifndef String_H_
#define String_H_

class string
{
public:
	string(void);
	string(const string &);
	string& operator= (const string &);
	~string(void);
};

#endif //String_H_