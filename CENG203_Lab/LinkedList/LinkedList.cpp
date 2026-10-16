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
	Node* newNode = new Node(); //heap
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr) { //if we don't have linked list
		head = newNode;
		return;
	}

	Node* curr = head;  //you can't move the head

	while (curr->next != nullptr) {
		curr = curr->next;
	}
	curr->next = newNode;
}

int LinkedList::length() const //number of nodes
{
	int number = 0;
	Node* curr = head;

	while (curr != nullptr)
	{
		number++;
		curr = curr->next;
	}
	return number;
}


void LinkedList::createFromArray(int arr[], int size)
{
	for (int i = 0;i < sizeof(arr);i++) {
		insertAtEnd(arr[i]);
	}
}

int LinkedList::search(int value) const
{
	int index = -1;
		int counter = 0;

		Node* curr = head;
		while (curr != nullptr) {
			if (curr->data == value) {
				index = counter;
				return index;
			}
			curr = curr->next;
			counter = counter + 1;
			
		}
		return index;
}

int LinkedList::update(int oldValue, int newValue)
{
   Node* curr= head;
   int count = 0;

   while (curr != nullptr) {
	   if (curr->data == oldValue) {
		   curr->data = newValue;
		   count++;
	   }
	   curr=curr->next;
   }
   return count;
}

bool LinkedList::insertAt(int index, int value)
{
	return false; 
}

bool LinkedList::deleteValue(int value)
{
	
	Node* curr = head;
	Node* prev = head;
	

	if (curr == nullptr) {  //if we dont have list
		return false;
	}

	if (curr->data == value) {  //if value is in first node(head)
		curr->next = head;
		delete curr;
		return true;
	}
	curr = head->next; //if it is not in first node, we can move the next
	

	while (curr!=nullptr) {
		if (curr->data == value) { //30
			
			prev->next = curr->next; //29'un nexti= 31i gösteirr.
			delete curr;

			return true;
		}
		prev = curr;              //29
		curr = curr->next;        //31
		
	}
	return false;
	
}

void LinkedList::merge(LinkedList& other)
{
}