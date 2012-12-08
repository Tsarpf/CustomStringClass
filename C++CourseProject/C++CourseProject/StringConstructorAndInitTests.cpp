#include "StringConstructorAndInitTests.h"
using namespace Testing;

StringConstructorAndInitTests::StringConstructorAndInitTests(void)
{
	m_TestCategoryName = "OperatorOverloadTests";

	//Add all test functions and their names here.
	m_Tests.push_back([&]() { return StringEmptyAfterDefaultConstructorTest(); });
	m_TestNames.push_back("StringCorrectAfterDefaultConstructor");
}


StringConstructorAndInitTests::~StringConstructorAndInitTests(void)
{

}


bool StringConstructorAndInitTests::StringEmptyAfterDefaultConstructorTest()
{
	ASSERT(StringsAreEqual(m_String->data(), ""));
}

void StringConstructorAndInitTests::Setup()
{
	m_String = new String;
}

void StringConstructorAndInitTests::Teardown()
{
	delete m_String;
}