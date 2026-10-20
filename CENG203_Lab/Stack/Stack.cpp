#include "Stack.h"
#include <iostream>
using namespace std;


Stack::Stack()
{
    top = nullptr;
    count = 0;
}

Stack::~Stack()
{
    clear();
}

void Stack::push(int value)
{
    // TODO: like LinkedList::insertAtFront, then count++
}

bool Stack::pop(int& value)
{
    return false;                   // TODO
}

bool Stack::peek(int& value) const
{
    return false;                   // TODO
}

bool Stack::isEmpty() const
{
    return true;                    // TODO
}

int Stack::size() const
{
    return count;
}

void Stack::clear()
{
    // TODO: pop until pop() returns false
}

void Stack::display() const
{
    cout << "top ->";
    // TODO: walk from top, print every value; "(empty)" if there is none
    cout << endl;
}
