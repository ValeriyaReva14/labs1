#include "pch.h"
#include "unsortedLinkedList.h"
#include <iostream>
using namespace std;

struct LinkedList
{
	char data;
	LinkedList *next;
};

class List
{
	LinkedList *first;
public:
	List() : first() {}
	void add(char x)
	{
		if (!first)
		{
			first = new LinkedList;
			first->data = x;
			first->next = 0;
		}
		else
		{
			LinkedList *current = new LinkedList;
			current->data = x;
			current->next = first;
			first = current;
		}
	}
	void show()
	{
		LinkedList *current = first;
		while (current)
		{
			cout << current->data << ' ';
			current = current->next;
		}
		cout << '\n';
	}
	void deleteDublicate()
	{
		LinkedList *bufi = 0;
		bool firstChang = false;
		for (LinkedList *i = first; i; i = i->next)
		{
			bool isDubl = false;
			LinkedList *bufj = first;
			for (LinkedList *j = first; j; j = j->next)
			{
				if (i->data == j->data && i != j)
				{
					bufj->next = j->next;
					delete j;
					j = bufj;
					isDubl = true;
				}
				bufj = j;
			}
			bufi = i;
		}
	}
	~List()
	{
		LinkedList *current = first;
		while (first)
		{
			current = first->next;
			delete first;
			first = current;
		}
		first = 0;
	}
};


