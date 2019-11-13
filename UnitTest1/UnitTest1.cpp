#include "pch.h"
#include "CppUnitTest.h"
#include "..\\Lab_9\Priority.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(heapTest1)
		{
			int array[6] = { 2,3,5,8,11,4 };
			heap test(array, 6);

			string output = "2345811";

			Assert::AreEqual(test.printArray(),output);
		}

		TEST_METHOD(heapTest2)
		{
			heap test;

			Assert::IsTrue(test.add(9));
			Assert::IsTrue(test.add(3));
			Assert::IsTrue(test.add(18));
			Assert::IsTrue(test.add(22));
			Assert::IsTrue(test.add(1));
			Assert::IsTrue(test.add(7));
			Assert::IsTrue(test.add(6));

			string output = "136791822";

			Assert::AreEqual(test.printArray(), output);

		}

		TEST_METHOD(heapTest3)
		{
			heap test;

			Assert::IsTrue(test.add(9));
			Assert::IsTrue(test.add(3));

			Assert::IsTrue(test.remove());

			Assert::IsTrue(test.add(18));
			Assert::IsTrue(test.add(22));
			Assert::IsTrue(test.add(1));

			Assert::IsTrue(test.remove());

			Assert::IsTrue(test.add(7));
			Assert::IsTrue(test.add(6));

			Assert::IsTrue(test.remove());

			string output = "1367";

			Assert::AreEqual(test.printArray(), output);
		}

		TEST_METHOD(queueTest1)
		{
			pQueue test;

			test.pInsert(3);
			test.pInsert(9);
			test.pInsert(17);
			test.pInsert(2);
			test.pInsert(13);
			test.pInsert(29);
			test.pInsert(4);

			string output = "2349131729";

			Assert::AreEqual(test.printPQueue(), output);
		}

		TEST_METHOD(queueTest2)
		{

			pQueue test;

			test.pInsert(14);
			test.pInsert(6);

			test.pRemove();

			test.pInsert(22);
			test.pInsert(8);
			test.pInsert(91);

			test.pRemove();

			test.pInsert(33);
			test.pInsert(72);

			test.pRemove();

			string output = "682233";

			Assert::AreEqual(test.printPQueue(), output);
		}

		TEST_METHOD(queueTest3)
		{
			pQueue test;

			test.pInsert(3);
			test.pInsert(9);
			test.pInsert(17);
			test.pInsert(2);

			test.pRemove();
			test.pRemove();
			test.pRemove();
			test.pRemove();
			

			string output = "";

			Assert::AreEqual(test.printPQueue(), output);
		}
	};
}
