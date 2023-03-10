#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsForAssignment
{
	TEST_CLASS(Task1)
	{
	public:
		
		TEST_METHOD(PerimeterTest)
		{
			int length = 5;
			int width = 6;
			int actual = getPerimeter(&length, &width);
			Assert::AreEqual(22, actual);

		}
		TEST_METHOD(AreaTest)
		{
			int length = 6;
			int width = 5;
			int actual = getArea(&length, &width);
			Assert::AreEqual(30, actual);
		}
	};
	TEST_CLASS(Task2)
	{
	public:
		
		TEST_METHOD(LengthTest1)
		{
			int length = 1;
			int input = 12;
			setLength(input, &length);
			Assert::AreEqual(12, length);
		}
		TEST_METHOD(LengthTest2)
		{
			int length = 1;
			int input = 210;
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(LengthTest3)
		{
			int length = 1;
			int input = 0;
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(WidthTest1)
		{
			int width = 1;
			int input = 50;
			setWidth(input, &width);
			Assert::AreEqual(50, width);

		}
		TEST_METHOD(WidthTest2)
		{
			int width = 1;
			int input = -99;
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(WidthTest3)
		{
			int width = 1;
			int input = 100;
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
	};
}
