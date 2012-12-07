//Abstract/Virtual base class from which all tests should inherit from.
#include "Test.h"
#include <iostream>
using namespace Testing;


Test::Test() : m_TestsFailed(0), m_TestsTotal(0)
{

}

int Test::GetNumberOfTestsFailedInCategory()
{
	return m_TestsFailed;
}
int Test::GetNumberOfTestsInCategory()
{
	return m_TestsTotal;
}

void Test::PerformTests()
{
	int index = 0;
	//assert m_TestNames count is the same as m_Tests count
	for(auto it = m_Tests.begin(); it != m_Tests.end(); it++)
	{
		Setup();

		bool result = (*it)();		

		if(!result)
		{
			m_TestsFailed++;
			
			std::cout << "\t" + m_TestNames[index] << " failed" << std::endl;
		}
		else
		{
			std::cout << "\t" << m_TestNames[index] << " succeeded" << std::endl;
		}


		m_TestsTotal++;
		

		index++;


		Teardown();
	}

	if(m_TestsFailed == 0)
		std::cout << m_TestCategoryName << " succeeded. All " << m_TestsTotal << " tests passed.";
	else
		std::cout << m_TestCategoryName << " failed." << m_TestsFailed << " out of " << m_TestsTotal << " failed.";
}