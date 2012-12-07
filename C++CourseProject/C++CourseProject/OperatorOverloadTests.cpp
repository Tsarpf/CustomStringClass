#include "OperatorOverloadTests.h"

using namespace Testing;

OperatorOverloadTests::OperatorOverloadTests(void)
{
	m_TestCategoryName = "OperatorOverloadTests";
}


OperatorOverloadTests::~OperatorOverloadTests(void)
{
}

bool OperatorOverloadTests::PerformTests()
{
	for(auto it = m_Tests.begin(); it != m_Tests.end(); it++)
	{
		Setup();

		bool result = (*it)();

		//ToDo: something with the result

		Teardown();
	}
	return false; //Todo errything.
}

bool OperatorOverloadTests::AssignmentOperatorTest()
{
	
}