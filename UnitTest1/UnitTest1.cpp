#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a;
			int b;

			a.set_first(5);
			a.set_second(2);

			b = a.ipart();
			Assert::AreEqual(2, b);
		}

		
	};
}
