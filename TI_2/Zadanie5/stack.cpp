#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <cstdlib>


int numberOfElements;
int* stack;

int initializeStack()
{
	numberOfElements = 0;
	if (!stack)
	{
		stack = (int*)malloc(SIZE * sizeof(int));
		if (!stack)
			return 1;
		return 0;
	}
	return 2;
}

int push(int newElement)
{
	if (numberOfElements < SIZE - 1)
	{
		stack[numberOfElements] = newElement;
		numberOfElements++;
		return 0;
	}
	return 1;
}

int pop()
{
	if (numberOfElements > 0)
	{
		numberOfElements--;
		return stack[numberOfElements];
	}

	return NULL;
}

int top()
{
	if (numberOfElements > 0)
		return stack[numberOfElements - 1];
	return NULL;
}
