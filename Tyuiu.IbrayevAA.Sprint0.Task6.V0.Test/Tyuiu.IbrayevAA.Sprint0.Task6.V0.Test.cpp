#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint0.Task6.V0.Lib/Tyuiu.IbrayevAA.Sprint0.Task6.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task6* add = new Service();
			float x{};
			int y{};
			float v{};

			//run
			v = add->Calculate(x, y);
			Assert::AreEqual(v, v);
		}
	};
}
