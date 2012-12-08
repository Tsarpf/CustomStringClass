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
		//Tests

		//void StringsAreEqual(const char *, const char *) tests
		void StringsAreEqualWorksWithEmptyStringsTest();
		void StringsAreEqualWorksWhenOtherStringIsEmptyTest();
		void StringsAreEqualWorksWithDifferentStringsWithSameBeginningTest();
		void StringsAreEqualReturnsTrueWhenStringsAreSameTest();

		//int StringLength() tests
		void StringLengthReturnZeroWhenEmptyTest();
		void StringLengthReturnCorrectWhenNonZeroTest();

		//char *  StringCopy(const char *) tests
		void StringCopyReturnsEmptyWhenInputEmpty();
		void StringCopyCopiesNonEmptyStringCorrectly();

	private:
		//Data needed by tests
		String * m_String;
	};
}
