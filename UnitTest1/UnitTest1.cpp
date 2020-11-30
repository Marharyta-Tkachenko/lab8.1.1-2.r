#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.1-2.r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool c;
			int i = 0;
			char str[] = "SSSQFdfgf";
			c = contain(str, i);
			Assert::AreEqual(c, true);
		}
	};
}
