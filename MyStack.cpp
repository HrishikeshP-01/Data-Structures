#include "MyStack.h"

MyStack::MyStack(int x)
{
	n = x;
}

bool MyStack::IsEmpty()
{
	if (top == -1) { return true; }
	return false;
}

bool MyStack::IsFull()
{
	if (top == n-1) { return true; }
	return false;
}

void MyStack::Push(int x, int a[])
{
	if (IsFull())
	{
		cout << "Stack Overflow \n";
		return;
	}
	top++;
	a[top] = x;
}

int MyStack::Pop(int a[])
{
	if (IsEmpty())
	{
		cout << "Stack Underflow \n";
		return 0;
	}
	int popped = a[top];
	a[top] = 0;
	top--;
	return popped;
}

int MyStack::Count()
{
	return top + 1;
}

void MyStack::Change(int x, int pos, int arr[])
{
	if (pos > top)
	{
		cout << pos + "index in stack not found \n";
		return;
	}
	arr[pos] = x;
}

int MyStack::Peek(int pos, int arr[])
{
	if (pos > top)
	{
		cout << pos + "index in stack not found \n";
		return 0;
	}
	return arr[pos];
}

void MyStack::Display(int arr[])
{
	int i = top;
	while (i >= 0)
	{
		cout << arr[i] << "\n";
		i--;
	}
}