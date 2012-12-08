#include "MiscellaneousTests.h"

using namespace Testing;

MiscellaneousTests::MiscellaneousTests(void)
{
	m_Tests.push_back([&]() { return StringsAreEqualWorksWithEmptyStringsTest(); });
	m_TestNames.push_back("StringsAreEqualWorksWithEmptyStringsTest");
	
	m_Tests.push_back([&]() { return StringsAreEqualWorksWhenOtherStringIsEmpty(); });
	m_TestNames.push_back("StringsAreEqualWorksWhenOtherStringIsEmpty");

	m_Tests.push_back([&]() { return StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest(); });
	m_TestNames.push_back("StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest");
	
	m_Tests.push_back([&]() { return StringsAreEqualReturnsTrueWhenStringsAreSameTest(); });
	m_TestNames.push_back("StringsAreEqualReturnsTrueWhenStringsAreSameTest");
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



}
void MiscellaneousTests::StringsAreEqualWorksWhenOtherStringIsEmpty()
{

}
void MiscellaneousTests::StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest()
{
}
void MiscellaneousTests::StringsAreEqualReturnsTrueWhenStringsAreSameTest()
{

}