/*

#include "MyStack.h"

int main()
{
	cout << "Enter size of stack \n";
	int n = 5, option;
	cin >> n;
	int* arr = new int[n];
	MyStack ms(n);

	do
	{
		cout << "Press key to perform operations \n";
		cout << "1. Push \n2. Pop \n3. Is Empty \n4. Is Full \n5. Count \n6. Change \n7. Peek \n8. Display \n9. Option \n";
		cin >> option;
		int pos, x;
		switch (option)
		{
		case 1:
			cout << "Enter no: \n";
			cin >> x;
			ms.Push(x, arr);
			break;
		case 2:
			cout << ms.Pop(arr) + "Popped \n";
			break;
		case 3:
			cout << ms.IsEmpty() + "\n";
			break;
		case 4:
			cout << ms.IsFull()  + "\n";
			break;
		case 5:
			cout << ms.Count();
			break;
		case 6:
			cout << "Enter index & position to change \n";
			cin >> pos;
			cin >> x;
			ms.Change(x, pos, arr);
			break;
		case 7:
			cout << "Enter index \n";
			cin >> pos;
			cout << ms.Peek(pos, arr);
			break;
		case 8:
			cout << "Elements are: \n";
			ms.Display(arr);
			break;
		case 9:
			break;
		default:
			break;
		}
	} while (option != 9);
}

*/