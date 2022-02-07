#pragma once
#include <iostream>
#include <string>

using namespace std;

class MyQueue 
{
protected:
	int n;
	int front, rear;
public:
	MyQueue(int x);
	void Enqueue(int x, int arr[]);
	int Dequeue(int arr[]);
	bool isEmpty();
	bool isFull();
	int Count();
	void Display(int arr[]);
};