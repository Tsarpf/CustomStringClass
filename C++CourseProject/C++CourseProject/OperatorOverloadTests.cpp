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
		//Is this actually test category specific or could this be generalized?
		//This function is probably identical, each test_category just uses it's own setup and teardown
		//I wonder how to implement this...

		Teardown();
	}
	return false; //Todo errything.
}

bool OperatorOverloadTests::AssignmentOperatorTest()
{
	
}

void OperatorOverloadTests::Setup()
{

}

void OperatorOverloadTests::Teardown()
{

}