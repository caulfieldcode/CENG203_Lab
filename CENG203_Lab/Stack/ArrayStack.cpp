#include "ArrayStack.h"
#include <iostream>
using namespace std;

ArrayStack::ArrayStack()
{
    topIndex = -1;
}

bool ArrayStack::push(int value)
{
                    
}

bool ArrayStack::pop(int& value)
{
    return false;                   // TODO (Q3)
}

bool ArrayStack::peek(int& value) const
{
    return false;                   // TODO (Q3)
}

bool ArrayStack::isEmpty() const
{
    return true;                    // TODO (Q3)
}

bool ArrayStack::isFull() const
{
    return false;                   // TODO (Q3)
}

int ArrayStack::size() const
{
    return 0;                       // TODO (Q3)
}

void ArrayStack::display() const
{
    cout << "top ->";
    // TODO (Q3)
    cout << endl;
}