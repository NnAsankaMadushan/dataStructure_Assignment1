#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{
	SinglyLinkedList sll;
	int elm;
	int n,num;
	cout << "Enter the size of the array : ";
	cin >> n;
	for (int i=0; i < n; i++)
	{
		cout << "Enter a value for " <<i<<" : ";
		cin >> elm;
		sll.insertAt(i, elm);
	}
	sll.print();
	cout << "The number that you want to delete : " ;
	cin >> num;
	cout << "deleteWith(" << num << ")\n" << endl;
	sll.deleteWith(num);

	sll.print();
	return 0;
}
