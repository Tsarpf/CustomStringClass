//Abstract/Virtual base class from which all tests should inherit from.
#include "Test.h"
#include <iostream>
using namespace Testing;
/*
Test::Test(void)
{
}

Test::~Test(void)
{
}
*/

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
			
			std::cout << "\t" + m_TestNames[index] + " failed" << std::endl;
			//m_ReturnStruct.m_TestsFailed++;
			//m_ReturnStruct.m_InfoString = "\t" + m_TestNames[index] + " failed\n" + m_ReturnStruct.m_InfoString;
		}
		else
		{
			//m_ReturnStruct.m_InfoString = "\t" + m_TestNames[index] + "  succeeded\n" + m_ReturnStruct.m_InfoString;
		}



		m_TestsTotal++;
		
		index++;
		Teardown();
	}
	return m_ReturnStruct; //Todo errything.
}