#include "OperatorOverloadTests.h"

using namespace Testing;

OperatorOverloadTests::OperatorOverloadTests(void)
{
	m_TestCategoryName = "OperatorOverloadTests";

	//Add all test functions and their names here.
	m_Tests.push_back([&]() { return AssignmentOperatorTest(); });
	m_TestNames.push_back("AssignmentOperatorTest");
}


OperatorOverloadTests::~OperatorOverloadTests(void)
{
}

bool OperatorOverloadTests::AssignmentOperatorTest()
{
	return false; //todo: everything
}

void OperatorOverloadTests::Setup()
{
	m_String = new String; //Todo: check what constructor to use etc.
}

void OperatorOverloadTests::Teardown()
{
	delete m_String;
}