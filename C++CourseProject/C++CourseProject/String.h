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
	char* operator[](int);
	bool operator==(const char *);
	
	char* begin();
	char* end();


	//Static String functions
	static int StringLength(const char *);

	static char * StringCopy( const char *);

	static bool StringsAreEqual(const char * a, const char * b);

	static void Swap(String*,String*);

	~String(void);
	const char* data();
protected:
	char* m_String;

public:
	class Iterator
	{
	public:
		Iterator()
		{
			m_Pointer = nullptr;
		}
		~Iterator()
		{
		}

		Iterator(char * Str)
		{
			m_Pointer = Str;
		}

		bool operator==(char * OtherChar)
		{
			if(OtherChar == nullptr)
				return m_Pointer == nullptr;
			return *m_Pointer == *OtherChar;
		}

		char* operator*()
		{
			return m_Pointer;
		}
		Iterator(const Iterator & OtherIterator)
		{
			m_Pointer = OtherIterator.m_Pointer;
		}

		Iterator& operator=(const Iterator & OtherIterator)
		{
			m_Pointer = OtherIterator.m_Pointer;
			return *this;
		}
		Iterator& operator++() //prefix ++
		{
			m_Pointer++;
			return *this;
		}
		Iterator operator++(int) //postfix ++
		{
			Iterator result(*this);
			++(*this);
			return result;
		}
	private:
		char * m_Pointer;
	};
};

#endif //String_H_