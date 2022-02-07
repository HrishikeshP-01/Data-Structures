#include "MyQueue.h"

int main()
{
	cout << "Enter size of queue: \n";
	int n = 0;
	cin >> n;

	MyQueue mq(n);
	int* arr = new int[n];

	int ch, x;
	do
	{
		cout << "Enter \n1. Enqueue \n2. Dequeue \n3. Is Empty \n4. Is Full \n5. Count \n6. Display \n7. Exit \n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter no: to add to queue: ";
			cin >> x;
			mq.Enqueue(x, arr);
			break;
		case 2:
			x = mq.Dequeue(arr);
			cout << x << endl;
			break;
		case 3:
			cout << mq.isEmpty() << endl;
			break;
		case 4:
			cout << mq.isFull() << endl;
			break;
		case 5:
			cout << mq.Count();
			break;
		case 6:
			mq.Display(arr);
			break;
		default:
			break;
		}
	} while (ch != 7);
	return 0;
}