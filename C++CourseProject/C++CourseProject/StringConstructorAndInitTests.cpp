#include "StringConstructorAndInitTests.h"
using namespace Testing;

StringConstructorAndInitTests::StringConstructorAndInitTests(void)
{
	m_TestCategoryName = "OperatorOverloadTests";

	//Add all test functions and their names here.
	m_Tests.push_back([&]() { return StringEmptyAfterDefaultConstructorTest(); });
	m_Tests.push_back([&]() { return DataCorrectIfCharPointerConstructorGivenEmptyStringLiteralTest(); });
	m_Tests.push_back([&]() { return DataCorrectIfCharPointerConstructorGivenNonEmptyStringLiteralTest(); });
	m_Tests.push_back([&]() { return DataCorrectIfUsedCopyConstructor(); });
}


StringConstructorAndInitTests::~StringConstructorAndInitTests(void)
{

}

void StringConstructorAndInitTests::DataCorrectIfUsedCopyConstructor()
{
	delete m_String;
	String otherString("Test");
	m_String = new String(otherString);
	ASSERT(String::StringsAreEqual(m_String->data(), "Test"));
}

void StringConstructorAndInitTests::DataCorrectIfCharPointerConstructorGivenEmptyStringLiteralTest()
{
	delete m_String;
	m_String = new String("");
	ASSERT(String::StringsAreEqual(m_String->data(), ""));
}

void StringConstructorAndInitTests::DataCorrectIfCharPointerConstructorGivenNonEmptyStringLiteralTest()
{
	delete m_String;
	m_String = new String("testing testing");
	ASSERT(String::StringsAreEqual(m_String->data(), "testing testing"));
}

void StringConstructorAndInitTests::StringEmptyAfterDefaultConstructorTest()
{
	ASSERT(m_String->StringsAreEqual(m_String->data(), ""));
}

void StringConstructorAndInitTests::Setup()
{
	m_String = new String;
}

void StringConstructorAndInitTests::Teardown()
{
	delete m_String;
}