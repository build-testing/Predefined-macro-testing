




//https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170&redirectedfrom=MSDN

// macro__COUNTER__.cpp
// Demonstration of __COUNTER__, assigns unique identifiers to
// different objects of the same type.
// Compile by using: cl /EHsc /W4 macro__COUNTER__.cpp
#include <stdio.h>

class exampleClass {
	int m_nID;
public:
	// initialize object with a read-only unique ID
	exampleClass(int nID) : m_nID(nID) {}
	int GetID(void) { return m_nID; }
};

int main()
{
	// __COUNTER__ is initially defined as 0
	exampleClass e1(__COUNTER__);

	// On the second reference, __COUNTER__ is now defined as 1
	exampleClass e2(__COUNTER__);

	// __COUNTER__ is now defined as 2
	exampleClass e3(__COUNTER__);

	printf("e1 ID: %i\n", e1.GetID());
	printf("e2 ID: %i\n", e2.GetID());
	printf("e3 ID: %i\n", e3.GetID());

	// Output
	// ------------------------------
	// e1 ID: 0
	// e2 ID: 1
	// e3 ID: 2

	return 0;
}



