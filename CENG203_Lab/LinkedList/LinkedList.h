#pragma once

#include "Node.h"

class LinkedList
{
private:
	Node* head;

public:
	LinkedList();
	~LinkedLÝST();

	void insertAtFront(int value);
	void display() const;
	bool isEmpty() const;
	 
};