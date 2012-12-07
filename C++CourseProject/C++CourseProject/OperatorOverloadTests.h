#ifndef OperatorOverloadTests_H_
#define OperatorOverloadTests_H_
#include "Test.h"
#include "String.h"

namespace Testing
{
	class OperatorOverloadTests : public Test
	{
	public:
		OperatorOverloadTests(void);
		~OperatorOverloadTests(void);
		void PerformTests();

	private: //Present in every test category.
		void Setup();
		void Teardown();
		
	private: //Test category specific.
		String * m_String;
		static bool AssignmentOperatorTest();
	};
}

#endif //OperatorOverloadTests_H_