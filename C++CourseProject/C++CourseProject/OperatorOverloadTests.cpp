#include "OperatorOverloadTests.h"

using namespace Testing;

OperatorOverloadTests::OperatorOverloadTests(void)
{
	//m_TestCategoryName = "OperatorOverloadTests";
	m_ReturnStruct.m_InfoString = "OperatorOverloadTests";
	m_ReturnStruct.m_TestsFailed = 0;
	m_ReturnStruct.m_TestsTotal = 0;

	
	m_Tests.push_back([]() { return AssignmentOperatorTest(); });
	m_TestNames.push_back("AssignmentOperatorTest");
}


OperatorOverloadTests::~OperatorOverloadTests(void)
{
}

bool OperatorOverloadTests::AssignmentOperatorTest()
{
	
}

void OperatorOverloadTests::Setup()
{
	m_String = new String; //Todo: check what constructor to use etc.
}

void OperatorOverloadTests::Teardown()
{
	delete m_String;
}