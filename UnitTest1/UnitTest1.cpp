#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.string/FileName.cpp"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			assert(Count("OGOAGA"), 2);  
			assert(Count("OGOGOGO"), 2);  
			assert(Count("AGAGAOGO"), 2); 
			assert(Count("AGAOGOOGO"), 3); 

		}
	};
}
