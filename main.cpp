#include <iostream>
using namespace std;
int main2();

//* Chapter 2 *// 
int main()
{
	//* 2.3 *// 
	/*
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	*/

	//* 2.4 *//
	/*
	cout << " '1's represent Tests that passed: " << endl;
	// unsigned u = 10, u2 = 42; // commented to be able to run together with first question
	std::cout << ((u2 - u)-32==0) << std::endl;
	std::cout << ((u - u2)- (pow(2, 8 * sizeof(int)) - 32) == 0 ) << std::endl; // sizeof wasn't learned yet, but this will work across all compilers and systems
	// int i = 10, i2 = 42; // commented to be able to run together with first question
	std::cout << ((i2 - i)-32==0) << std::endl;
	std::cout << ((i - i2)-(-32)==0) << std::endl;
	std::cout << ((i - u)-0==0) << std::endl;
	std::cout << ((u - i)==0) << std::endl;
	*/
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

	cout << "\x32\t\115\n" << endl;
	*/
	/*
	long double ld = 3.1415926536;
	int a{ ld }, b = { ld }; // error: narrowing conversion required
	int c(ld), d = ld; // ok: but value will be truncated
	*/

	//* 2.9 *//
	/* // Uncomment code below to check
	//std::cin >> int input_value; // This code is not the same as first initializing and then using cin for assingment. some intuition: cout << ((int j) == j) << endl;
	int i = { 3.14 };
	// double salary = wage = 9999.99;
	int i = 3.14;
	*/

	//* 2.10 *//
	// main2();

	//* 2.11 *//
	// extern int ix = 1024; // definintion, error in main function.
	// int iz; // definintion
	// extern int iz; // declaration
	// iz = 0;


	//* 2.12 *//
	// int double = 3.14; // invalid
	// int _; // valid
	// int catch-22; // invalid
	// int 1_or_2 = 1; // invalid
	// double Double = 3.14; // valid but not recommended

	//* 2.13 *//
	/*
	int i = 42;
	int main()
	{
		int i = 100; int j = i;
	}
	*/ // j = 100;

	//* 2.14 *//
	/*
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
	*/
	// legal, output: 100 45 


	//* 2.15 *//
	/*
	// int ival = 1.01; // valid
	// int &rval1 = 1.01; // must ref object, not a literall
	// int &rval2 = ival; // valid
	// int &rval3; // uninitialized
	*/

	//* 2.16 *//
	/*
	// They are all valid
	int i = 0, &r1 = i; double d = 0, &r2 = d;
	r2 = 3.14159; // d = 3.14159
	r2 = r1; //d = i
	i = r2;
	r1 = d;
	*/


	//* 2.17 *//
	/*
	int i, & ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
	*/ // output: 10 10
	//
	// double dval;
	// double *pd = &dval; // ok: initializer is the address of a double
	// double *pd2 = pd; // ok: initializer is a pointer to double
	// cout << *pd2 << " " << pd2 << endl; // interesting
	// int *pi = pd; // error: types of pi and pd differ
	// pi = &dval; // error: assigning the address of a double to a pointer to int

	//* 2.18 *//
	/*
	int x = 23;
	int *p = &x;
	cout << "x before: " << x << endl;
	*p = 24;
	cout << "x after: " << x << endl;
	cout << "p before: " << p << endl;
	p++;
	cout << "p after: " << p << endl;
	*/

	//* 2.19 *//
	// pointers are an address object which can be operated on (++, ect). pointers can also be dereferenced to access the object at that memory address.
	// references, once initialized, cannot be changed, and immediately resolve to the object they reference. references themselves are not objects.

	//* 2.20 *//
	//int i = 42; // initialize an integer to the literal value of 42.
	//int *p1 = &i; // initialize an integer pointer to the address of the variable i
	//// cout << *p1 << endl;
	//*p1 = *p1 * *p1; // square the integer object's value
	//// cout << *p1 << endl;

	//* 2.21 *//
	/*	Explain each of the following definitions. Indicate whether any are illegal and, if so, why. */
	// int i = 0; // legal definition of an integer to the literal value 0.
	// double* dp = &i; // illegal: int reference to a double pointer
	// int *ip = i; // illegal: initializing the pointer should point to the reference of the object.
	// int *p = &i; // legal definition of an integer pointer to the integer variable named i

	//* 2.22 *//
	// if (p) // checks if the p is not a nullptr
	// if (*p) // checks if the value of the variable p is not zero

	//* 2.23 *//
	/* Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not? */
	/*
	int x = 2, *px = &x;
	void* t = px;
	if (*t) { cout << "valid object" << endl; }
	*/ // can't determine becuase void pointers cannot dereference.

	//* 2.24 *//
	// void pointers can point to any object, but long pointers cannot point to ints


	//* 2.25 *//
	//int* ip, &r = ip; // ip is a pointer to int. r is illegally declared
	//int i, * ip = 0; // i is a declared int. ip is a nullptr
	//int* ip, ip2; // ip is a pointer to int. ip2 is a declared int.




	//* 2.26 *//
	//const int buf = 512; // all consts must be initialized or declared as extern.
	//int cnt = 0; // this is fine
	//const int sz = cnt; // this is also fine
	//++cnt; ++sz; // sz cannot be incremented.

	//int errNumb = 0;
	//int* const curErr = &errNumb; // curErr will always point to errNumb
	//double pi = 3.14159;
	//const double* const pip = &pi; // pip is a const pointer to a const	object
	//cout << *pip << endl;
	//pi = 2.0334;
	//cout << *pip << endl;

	//* 2.27 *//
	//int i = -1, &r = 0; // initialization of r is illegal. reference cannot reference a literal unless const
	//int* const p2 = &i2; //i2 is an undeclared reference.
	//const int i = -1, &r = 0; // legal. const int i initialized to -1 
	//const int* const p3 = &i2; //i2 is an undeclared reference.
	//const int* p1 = &i2; //i2 is an undeclared reference.
	//const int &const r2; // illegal consts must be defined. can define it here or add extern to indicate it will be declared elsewhere
	//const int i2 = i, &r = i; // legal

	//* 2.28 *//
	//int i, *const cp; //cp must be initialized since it is const
	//int* const p2; //same thing with p2
	//const int ic, &r = ic; //ic must be initialized
	//const int* const p3; // must be initialized
	//const int* p; // fine

	//* 2.29 *//
	//i = ic; // ic is undefined, but fine if defined.
	//p1 = p3; // type mismatch. pointer type must match base type, but inner const not required.
	//p1 = &ic; //p1 is not a const pointer
	//p3 = &ic; // p3 must first be initialized. but would still be illegal since p3 cannot be assigned, only initialized. this would be fine as part of p3's initialization, 
	//p2 = p1; // same issue as one above. this would be fine as p2's initialization
	//ic = *p3; // ic is a const therefore it cannot be assigned to.
	
	//* 2.30 *//
	/*
	For each of the following declarations indicate whether the
	object being declared has top-level or low-level const.
	
	const int v2 = 0; int v1 = v2; // v2 is Top Level const, v1 is not a const
	int *p1 = &v1, &r1 = v1; // neither p1 nor r1 has any const-ness
	const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 is a low level const. p3 is both. r2 is a low level const reference
	*/

	//* 2.31 *// 
	/*
	Given the declarations in the previous exercise,
	determine whether the following assignments are legal.
	Explain how the top - level or low - level const applies in each case.
	r1 = v2; // legal: v2 is top level const and r1 is not, but its fine because top level const gets ignored when copying object
	p1 = p2; p2 = p1; // 1st is illegal because p2 is a low level const and p1 is not, and low level const is not ignored when copying. second is legal because p1 gets implicitly converted to a low level const
	p1 = p3; p2 = p3; // 1st is illegal because p3 is a low level const and p1 is not, and low level const is not ignored when copying. second statement is legal because low level const matches, and top level const is ignored.
	*/

	//* 2.32 *//
	// int null = 0, *p = null; // the code is not legal because p points to integer value instead of an address.
	

	//* 2.33 *//
	// int i = 0, &r = i;
	// auto a = r;
	// a=42; the value of the integer a is set to 42. i remains 0

	// b = 24;

	

	return 0;
}

std::string global_str;
int global_int;
int main2()
{
	int local_int; // == undefined and will throw errors if referenced. assignment will work fine.
	std::string local_str;

	cout << "Local Int : " << /*local_int*/ "undefined" << endl
		<< "Local Str : " << local_str << endl
		<< "Global Int : " << global_int << endl
		<< "Global Str : " << global_str << endl;

	return 0;
}