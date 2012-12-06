#ifndef Test_H_
#define Test_H_

#include <string>
#include <vector>

namespace Testing
{
	class Test
	{
	public:
		Test(void);
		~Test(void);
		virtual bool PerformTests();
	protected:
		bool m_Result;
		std::string m_TestCategoryName;
		std::vector<std::string>  m_TestNames;
	};
}

#endif //Test_H_