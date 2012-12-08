#ifndef Test_H_
#define Test_H_

#include <string>
#include <vector>
#include <functional>
#include <iostream>

namespace Testing
{
	class Test
	{
	public:
		Test();
		int GetNumberOfTestsInCategory();
		int GetNumberOfTestsFailedInCategory();
		virtual void PerformTests();
	protected:
		bool m_Result;
		std::vector<std::function<void()>> m_Tests;
		std::vector<std::string> m_TestNames;

		virtual void Setup() = 0;
		virtual void Teardown() = 0;
		bool StringsAreEqual(const char *, const char *);

		int m_TestsTotal;
		int m_TestsFailed;

		std::string m_TestCategoryName;
	};
}

#endif //Test_H_



#define ASSERT(expr)										\
m_TestsTotal++;												\
															\
if(!(expr))													\
{															\
	m_TestsFailed++;										\
	throw std::exception("Assert failed in: " __FUNCTION__);\
}															\
else														\
{															\
	std::cout << __FUNCTION__ << " passed" << std::endl;		\
}