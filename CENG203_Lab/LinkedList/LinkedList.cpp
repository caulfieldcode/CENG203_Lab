#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList: : LinkedList()
{
	head = nullptr;
}

LinkedList: : ~LinkedList()
{
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void LinkedList :: insertAtFront(inst value)
{
	Node* newNode = New Node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void LinkedList :: display() const
{
	for (Node* cur = head; cur != nullptr; cur = cur->next)
		cout << cur->data << " -> ";
	cout << "NULL" << endl;
}

bool LinkedList::isEmpty() const
{
	return head == nullptr;

}