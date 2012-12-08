#include "OperatorOverloadTests.h"

using namespace Testing;

OperatorOverloadTests::OperatorOverloadTests(void)
{
	m_TestCategoryName = "OperatorOverloadTests";

	//Add all test functions and their names here.
	m_Tests.push_back([&]() { return DataCorrectAfterAssignmentToCharPointerTest(); });
	m_Tests.push_back([&]() { return EqualToOperatorReturnsTrueWhenComparingToEqualStringLiteralTest(); });
	m_Tests.push_back([&]() { return DataCorrectAfterAssignmentToOtherStringTest();});

}


OperatorOverloadTests::~OperatorOverloadTests(void)
{
}

void OperatorOverloadTests::DataCorrectAfterAssignmentToOtherStringTest()
{
	String otherString("asdf");
	*m_String = otherString;

	ASSERT(String::StringsAreEqual(m_String->data(), "asdf"));
}

void OperatorOverloadTests::DataCorrectAfterAssignmentToCharPointerTest()
{
	*m_String = "teststring";
	ASSERT(String::StringsAreEqual(m_String->data(), "teststring"));
}

void OperatorOverloadTests::EqualToOperatorReturnsTrueWhenComparingToEqualStringLiteralTest()
{
	*m_String = "teststring";

	ASSERT(*m_String == "teststring");
}
void OperatorOverloadTests::Setup()
{
	m_String = new String; //Todo: check what constructor to use etc.
}

void OperatorOverloadTests::Teardown()
{
	delete m_String;
}