#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void LinkedList::insterAtFront(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void LinkedList::display() const
{
	for (Node* cur = head; cur != nullptr; cur = cur->next)
		cout << cur->data << " -> ";
	cout << "NULL" << endl;
}

bool LinkedList::isEmpty() const
{
	return head == nullptr;
}

void LinkedList::insertAtEnd(int value)
{

}

int LinkedList::length() const
{
	return 0;
}

void LinkedList::createFromArray(int arr[], int size)
{
}

int LinkedList::search(int value) const
{
	return -1;
}

int LinkedList::update(int oldValue, int newValue)
{
	return 0;
}

bool LinkedList::insertAt(int index, int value)
{
	return false;
}

bool LinkedList::deleteValue(int value)
{
	return false;
}

void LinkedList::merge(LinkedList& other)
{
}