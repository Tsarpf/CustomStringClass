#ifndef Test_H_
#define Test_H_

#include <string>
#include <vector>
#include <functional>

namespace Testing
{
	class Test
	{
	public:
		Test();
		int GetNumberOfTestsInCategory();
		int GetNumberOfTestsFailedInCategory();
		virtual void PerformTests() = 0;
	protected:
		bool m_Result;
		std::vector<std::function<bool()>> m_Tests;
		std::vector<std::string> m_TestNames;

		void AssertTrue(bool,bool); //Might be able to generalize for all tests
		virtual void Setup() = 0;
		virtual void Teardown() = 0;

		int m_TestsTotal;
		int m_TestsFailed;

		std::string m_TestCategoryName;
	};
}

#endif //Test_H_