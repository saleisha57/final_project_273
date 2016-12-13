#include "stdafx.h"
#include "CppUnitTest.h"
#include<iostream>
#include<fstream>
#include "Everything.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTester
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ValidIntegers1)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Input.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		
			
			
			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();

		}
		TEST_METHOD(InvalidInput1)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Input2.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			
			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();
			Assert::Fail();

		}
		TEST_METHOD(ValidBoundryTest1)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Input.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();

		}
		TEST_METHOD(ValidBoundryTest2)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Boundry2.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();

		}
		TEST_METHOD(InValidBoundryTest_SpecialBoundry_1)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Boundry3.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			Assert::Fail();
			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();
			Assert::Fail();

		}
		TEST_METHOD(InValidBoundryTest2)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Boundry4.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();
			Assert::Fail();
		}
		TEST_METHOD(InValidBoundryTest3)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\Boundry5.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();
			Assert::Fail();

		}
		TEST_METHOD(InValidInput3)
		{
			// Open a file stream to read the file zeroinput.txt (remember CS-172)
			// Replace "UnitTester" with the name of your Native Unit Test project
			std::ifstream ss("..\\UnitTester\\InvalidInput1.txt");

			// Check if we opened the file stream successfully
			if (ss.fail())
				throw int(-1); // throw an integer with value -1

							   // Replace the cin read buffer with the read buffer from the file stream 
			std::streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

			// Perform the read_int() test.
			// cin will now read from your file and not from the keyboard.
			// We expect the correct value returned is 0, ignoring the Hello string.

			// Restore cin to the way it was before
			cin.rdbuf(orig_cin);

			// Close the file stream
			ss.close();
			Assert::Fail();
		}
		
	};
}