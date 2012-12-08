#include "MiscellaneousTests.h"

using namespace Testing;

MiscellaneousTests::MiscellaneousTests(void)
{
	m_TestCategoryName = "MiscellaneousTests";

	m_Tests.push_back([&]() { return StringsAreEqualWorksWithEmptyStringsTest(); });
	
	m_Tests.push_back([&]() { return StringsAreEqualWorksWhenOtherStringIsEmpty(); });

	m_Tests.push_back([&]() { return StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest(); });
	
	m_Tests.push_back([&]() { return StringsAreEqualReturnsTrueWhenStringsAreSameTest(); });
}


MiscellaneousTests::~MiscellaneousTests(void)
{
}


void MiscellaneousTests::Teardown()
{
	delete m_String;
}

void MiscellaneousTests::Setup()
{
	m_String = new String;
}

void MiscellaneousTests::StringsAreEqualWorksWithEmptyStringsTest()
{
	char* testStringOne = "";
	char* testStringTwo = "";

	bool result =  m_String->StringsAreEqual(testStringOne,testStringTwo);

	ASSERT(result);
}
void MiscellaneousTests::StringsAreEqualWorksWhenOtherStringIsEmpty()
{
	char* testStringOne = "";
	char* testStringTwo = "asdf";

	bool result =  m_String->StringsAreEqual(testStringOne,testStringTwo);

	ASSERT(!result);
}
void MiscellaneousTests::StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest()
{
	char* testStringOne = "asdf";
	char* testStringTwo = "asdf fdsa";

	bool result =  m_String->StringsAreEqual(testStringOne,testStringTwo);

	ASSERT(!result);
}
void MiscellaneousTests::StringsAreEqualReturnsTrueWhenStringsAreSameTest()
{
	char* testStringOne = "asdffdsa";
	char* testStringTwo = "asdffdsa";

	bool result =  m_String->StringsAreEqual(testStringOne,testStringTwo);

	ASSERT(result);
}