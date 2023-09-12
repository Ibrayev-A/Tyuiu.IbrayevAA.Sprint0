#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IbrayevAA.Sprint0.Task5.V0.Lib/Tyuiu.IbrayevAA.Sprint0.Task5.V0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task5* add = new Service2();
			int a{};
			int b{};
			int c{};
			int v;

			//run
			v = add->Zadacha(a, b, c);
			Assert::AreEqual(v, v);
		}
	};
}
