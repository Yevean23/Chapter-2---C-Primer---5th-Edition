#include <iostream>
using namespace std;

//* Chapter 2 *// 
int main()
{
	//* 2.3 *// 
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;


	//* 2.4 *// 
	cout << " '1's represent Tests that passed: " << endl;
	// unsigned u = 10, u2 = 42; // commented to be able to run together with first question
	std::cout << ((u2 - u)-32==0) << std::endl;
	std::cout << ((u - u2)- (pow(2, 8 * sizeof(int)) - 32) == 0 ) << std::endl; // sizeof wasn't learned yet, but this will work across all compilers and systems
	// int i = 10, i2 = 42; // commented to be able to run together with first question
	std::cout << ((i2 - i)-32==0) << std::endl;
	std::cout << ((i - i2)-(-32)==0) << std::endl;
	std::cout << ((i - u)-0==0) << std::endl;
	std::cout << ((u - i)==0) << std::endl;

	//* 2.5 *// 
    // 'a', L'a', "a", L"a"; // Uncomment line in IDE to view types
	// 10, 10u, 10L, 10uL, 012, 0xC;
	// 3.14, 3.14f, 3.14L;
	// 10, 10u, 10., 10e-2;

	
	//* 2.6 *//
	// int month = 9, day = 7;
	// int month = 09, day = 07;
	// second row is octal int, first is decimal int 

	//* 2.7 *//
	// "Who goes with F\145rgus?\012" // Uncomment line in IDE to view types
	// 3.14e1L
	// 1024f
	// 3.14L

	//* 2.8 *//
	/*
	* Exercise 2.8: 
	Using escape sequences, 
	write a program to print 2M followed by a newline. 
	Modify the program to print 2, 
	then a tab, 
	then an M, 
	followed by a newline.
	*/
	cout << "\x32\t\115\n" << endl;
}