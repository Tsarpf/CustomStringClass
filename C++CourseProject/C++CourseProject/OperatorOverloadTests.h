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
		ReturnStruct PerformTests(); //ToDo: returns struct, not bool, 
	private:
		String * m_String;

		static bool AssignmentOperatorTest();
		void Setup();
		void Teardown();
	};


}

#endif //OperatorOverloadTests_H_