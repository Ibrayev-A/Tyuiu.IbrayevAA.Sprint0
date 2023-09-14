#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint0.Task7.V0.Lib/Tyuiu.IbrayevAA.Sprint0.Task7.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task7* add = new Service();
			int a{};
			int b{};
			int v{};

			//run
			v = add->Rezalt(a, b);
			Assert::AreEqual(v, v);
		}
	};
}
