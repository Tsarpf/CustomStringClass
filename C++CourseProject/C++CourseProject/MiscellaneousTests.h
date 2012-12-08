#include "Test.h"
#include "String.h"


namespace Testing
{
	class MiscellaneousTests : public Test
	{
	public:
		MiscellaneousTests(void);
		~MiscellaneousTests(void);
	private:
		void Setup();
		void Teardown();

	private:
		//ToDo: Add test specific stuff here.
		//Tests
		void StringsAreEqualWorksWithEmptyStringsTest();
		void StringsAreEqualWorksWhenOtherStringIsEmpty();
		void StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest();
		void StringsAreEqualReturnsTrueWhenStringsAreSameTest();

	private:
		//Data needed by tests
		String * m_String;
	};
}
