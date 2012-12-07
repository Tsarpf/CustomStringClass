#include "TestDriver.h"

#include "OperatorOverloadTests.h"
#include "StringConstructorAndInitTests.h"

using namespace Testing;

TestDriver::TestDriver(void)
{
}


TestDriver::~TestDriver(void)
{
	for(auto it = m_Tests.begin(); it != m_Tests.end(); it++)
	{

	}
}

void TestDriver::PopulateTestCategoryList()
{
	m_Tests.push_back(new OperatorOverloadTests());
	m_Tests.push_back(new StringConstructorAndInitTests());
}

void TestDriver::BeginTesting()
{

}