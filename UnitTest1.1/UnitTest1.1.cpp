#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.1/Line.h"
#include "../OOP1.1/OOP1.1.cpp"
#include "../OOP1.1/Line.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line line;
			Assert::IsTrue(line.Init(1, 2)); 
			Assert::AreEqual(1.0, line.getFirst()); 
			Assert::AreEqual(2.0, line.getSecond()); 
			Assert::AreEqual(3.0, line.function(1)); 
			Assert::IsFalse(line.Init(0, 2)); 
		}
	};
}
