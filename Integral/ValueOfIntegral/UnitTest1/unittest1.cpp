#include "stdafx.h"
#include "CppUnitTest.h"
#include "VIntegral.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Result_integral_equal_test)
		{
			// TODO: Your test code here
			VIntegral Integral;
			float b=Integral.calculate_integral(0,1000);
			float h = 250000.;
			Assert::AreEqual(h,b);
		}

	};
}