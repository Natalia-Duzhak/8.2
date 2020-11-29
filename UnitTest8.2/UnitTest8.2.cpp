#include "pch.h"
#include "CppUnitTest.h"
#include "../Projeect8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			char str[5] = { 'a','\0' };

			int  max=0;

			 MaxLength(str);
			Assert::AreEqual(max, 0);

		}
	};
}
