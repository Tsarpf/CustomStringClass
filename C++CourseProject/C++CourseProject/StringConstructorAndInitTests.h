#include "Test.h"

namespace Testing
{
	class StringConstructorAndInitTests : public Test
	{
	public:
		StringConstructorAndInitTests(void);
		~StringConstructorAndInitTests(void);
		void PerformTests();

	private:
		void Setup();
		void Teardown();

	private:
		//ToDo: Add test specific stuff here.
	};
}