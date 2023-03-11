# Data_Structure-for_Stack-.cpp

// 3장 - ArrayStackTest.cpp
#include "ArrayStackClass.h"


void main() {
	ArrayStack stack;
	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}
	stack.display();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.display();
}
