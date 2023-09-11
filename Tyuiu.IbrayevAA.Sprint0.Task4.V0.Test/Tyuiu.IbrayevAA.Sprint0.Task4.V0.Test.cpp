#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint0.Task4.V0.Lib/Tyuiu.IbrayevAA.Sprint0.Task4.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task4* add = new Service2();
			int a = 2;
			int b = 3;
			int c = 7;
			int d = 4;
			int v;

			//run
			v = add->Calculate(a, b, c, d);
			// Valid
			Assert::AreEqual(34, v);
		}
	};
}
