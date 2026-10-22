#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node* head;

public:
	LinkedList();
	~LinkedList();

	void insterAtFront(int value);
	void display() const;
	bool isEmpty() const;

	void insertAtEnd(int value);
	int length() const;
	void createFromArray(int arr[], int size);
	int search(int value) const;
	int update(int oldValue, int newValue);
	bool insertAt(int value, int position);
	bool deleteValue(int value);
	void merge(LinkedList& other);
};

  // ---- Week 5: recursion ----
    void displayBackward() const;   // 4 3 2 1 - via printBackward
    void reverse();                 // in place - via reverseFrom

private:
    static void  printBackward(const Node* node);   // recursive helper
    static Node* reverseFrom(Node* node);           // returns new head
};
