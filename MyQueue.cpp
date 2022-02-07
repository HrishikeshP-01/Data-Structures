#include "MyQueue.h"

MyQueue::MyQueue(int x)
{
	n = x;
	front = -1;
	rear = -1;
}

void MyQueue::Enqueue(int x, int arr[])
{
	if (isFull()) 
	{
		cout << "Queue Overflow \n";
		return; 
	}
	else if (isEmpty())
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear++;
	}
	arr[rear] = x;
}

int MyQueue::Dequeue(int arr[])
{
	int x;
	if (isEmpty()) 
	{ 
		cout << "Queue Underflow \n";
		return -99999; 
	}
	else if(front==rear)
	{
		x = arr[front];
		front = -1;
		rear = -1;
	}
	else
	{
		x = arr[front];
		front++;
	}
	return x;
}

bool MyQueue::isEmpty()
{
	if (front == -1 && rear == -1) { return true; }
	// else
	return false;
}

bool MyQueue::isFull()
{
	if (rear == n - 1) { return true; }
	// else
	return false;
}

int MyQueue::Count()
{
	if (isEmpty()) { return 0; }
	// else
	return rear - front + 1;
}

void MyQueue::Display(int arr[])
{
	if (isEmpty()) { return; }
	for (int i = front; i <= rear; i++)
	{
		cout << arr[i] << "\n";
	}
}