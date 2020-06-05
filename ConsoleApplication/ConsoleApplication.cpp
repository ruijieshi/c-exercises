//// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include "Sales_item.h"
//
////#define DEBUG
//
//using namespace std;
//
////2.39
//struct Sales_data {
//	unsigned int units_sold;
//	unsigned int revenue;
//	std::string book;
//};
//
//int main()
//{
//	// 2.18
//	int a = 10;
//	int* intPointer = &a;
//	cout << *intPointer << endl;
//	//change its value
//	*intPointer = 15;
//	cout << *intPointer << endl;
//
//	//2.19
//	/* The key diff between referenceand pointers:
//	1. The reference once binded, cannot be changed. Pointers can change which object to point
//	2. Change on reference does not need to be dereferenced, but pointer needed to with *.
//
//	Answers:
//	definition:
//
//	the pointer is "points to" any other type.
//
//	the reference is "another name" of an object.
//
//	key difference:
//
//	a reference is another name of an already existing object. a pointer is an object in its own right.
//	Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. a pointer can be assigned and copied.
//	a reference always get the object to which the reference was initially bound. a single pointer can point to several different objects over its lifetime.
//	a reference must be initialized. a pointer need not be initialized at the time it is defined.
//	*/
//
//	// 2.25
//	// Create a reference to pointer
//	int b = 42;
//	int* p = nullptr;
//	int*& r = p;
//	r = &b;
//	cout << *p << " should be : 42 now " << endl;
//	int c = 10;
//	r = &c;
//	cout << *p << " should be : 10 now " << endl;
//	*r = 100;
//	cout << c << " should be : 100 now " << endl;
//
//	
//	// Again: P64 Top-level const
//	/*
//	Reference cannot be top level const: `const int &const r2` is illegal
//	const on the left side of `=` is super set: which means you can assign plain value or const to a top-level reference or pointer
//	
//	*/
//
//	//2.31
//	const int v2 = 10;
//	int v1 = v2;
//	int& r1 = v1;
//	r1 = v2;
//
//	//2.32
//	int null = 0;
//	cout << null << endl;
//
//	//2.42
//	#ifdef DEBUG
//	cout << "Now it is in debug mode" << endl;
//	#endif
//
//	#ifndef DEBUG
//	cout << "Now it is not in debug mode" << endl;
//	#endif
//}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
