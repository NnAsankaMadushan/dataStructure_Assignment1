#pragma once
#include<iostream>
#include<cstddef>
using namespace std;

class Node     //Node class
{
public:
	int elem;
	Node* next;

	Node()
	{
		elem = -1;
		next = NULL;
	}

	Node(int e)
	{
		elem = e;
		next = NULL;
	}
};

class SinglyLinkedList   //singly linked list
{
private:
	Node* head;
	Node* tail;
	int size;
public:
	SinglyLinkedList()
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insertFirst(int elem)
	{
		//create a node
		Node* temp = new Node(elem);

		if (head == NULL)//empty list
		{
			head = temp;
			tail = temp;
			size++;
		}
		else//non empty list
		{
			temp->next = head;
			head = temp;
			size++;
		}
	}
	void insertLast(int elem)
	{
		//create a node
		Node* temp = new Node(elem);

		if (head == NULL)//empty list
		{
			head = temp;
			tail = temp;

		}
		else//non empty list
		{
			tail->next = temp;
			tail = temp;

		}
		size++;
	}
	void insertAt(int pos, int elem)
	{
		Node* temp = new Node(elem);
		if (pos<0 || pos>size)
		{
			cout << "Invalid Index" << endl;
		}
		else if (pos == 0)
		{
			insertFirst(elem);
		}
		else if (pos == size)
		{
			insertLast(elem);
		}
		else
		{
			Node* current = head;
			for (int i = 0; i < pos - 1; i++)
			{
				current = current->next;
			}

			temp->next = current->next;
			current->next = temp;
			size++;
		}
	}
	void print()
	{
		Node* current = head;
		cout << "Sinkly Linked List is : ";
		while (current != NULL)
		{
			cout << " " << current->elem ;
			current = current->next;
			if (current==NULL)
			{
				cout << " ";
			}
			else
			{
				cout << " ->";
			}
		}
		cout <<"\n"<< endl;
	}


	void deleteWith(int element)
	{
		
		while (head != NULL && head->elem == element)
		{
			head = head->next;				//changenig the head to the node that after the equilent Node to the giveen value  

		}
		Node* current = head;
		
		while (current != NULL && current->next != NULL)
		{
			if ((current->next)->elem == element)
			{
				
				current->next = (current->next)->next;
				
			}
			else
			{
				current = current->next;
			}
		}
	}
};