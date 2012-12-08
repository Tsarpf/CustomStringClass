#ifndef StringConstructorAndInitTests_H_
#define StringConstructorAndInitTests_H_

#include "Test.h"
#include "String.h"

namespace Testing
{
	class StringConstructorAndInitTests : public Test
	{
	public:
		StringConstructorAndInitTests(void);
		~StringConstructorAndInitTests(void);

	private:
		void Setup();
		void Teardown();

	private:
		//ToDo: Add test specific stuff here.
		//Tests
		void StringEmptyAfterDefaultConstructorTest();
		void DataCorrectIfCharPointerConstructorGivenEmptyStringLiteralTest();
		void DataCorrectIfCharPointerConstructorGivenNonEmptyStringLiteralTest();

		void DataCorrectIfUsedCopyConstructor();
	private:
		//Data needed by tests
		String * m_String;
	};
}


#endif //StringConstructorAndInitTests_H_