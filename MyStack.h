#pragma once
#include <iostream>;
#include <string>;

using namespace std;

class MyStack
{
protected:
	int n;
	int top = -1;
public:
	MyStack(int x);
	bool IsEmpty();
	bool IsFull();
	void Push(int x, int a[]);
	int Pop(int a[]);
	int Count();
	void Change(int x, int pos, int arr[]);
	int Peek(int pos, int arr[]);
	void Display(int arr[]);
};


