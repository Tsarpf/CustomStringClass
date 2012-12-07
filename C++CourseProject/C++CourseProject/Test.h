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
		Test(void);
		~Test(void);
		virtual bool PerformTests() = 0;
	protected:
		bool m_Result;
		std::string m_TestCategoryName;
		std::vector<std::function<bool()>> m_Tests;
		void AssertTrue(bool,bool); //Might be able to generalize for all tests
		virtual void PopulateTestList() = 0; //Always test category specific
		virtual void Setup() = 0;
		virtual void Teardown() = 0;
	};
}

#endif //Test_H_