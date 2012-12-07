#ifndef OperatorOverloadTests_H_
#define OperatorOverloadTests_H_
#include "Test.h"

namespace Testing
{
	class OperatorOverloadTests : public Test
	{
	public:
		OperatorOverloadTests(void);
		~OperatorOverloadTests(void);
		bool PerformTests(); //ToDo: returns struct, not bool, 
	private:
		//Actual tests
		static bool AssignmentOperatorTest();
		void PopulateTestList()
		{
			m_Tests.push_back([]() { return AssignmentOperatorTest(); });
		}
	};


}

#endif //OperatorOverloadTests_H_