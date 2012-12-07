#include <vector>
#include "Test.h"
namespace Testing
{
	class TestDriver
	{
	public:
		TestDriver(void);
		~TestDriver(void);
	private:
		void PopulateTestCategoryList();
		void BeginTesting();

		std::vector<Test*> m_Tests;
		int m_TotalTestCount;
		int m_TotalFailedTestCount;
	};
}