#pragma once
#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
    count = 0;
}

Queue::~Queue()
{
    int v;
    while (dequeue(v)) {}
}

void Queue::enqueue(int value)
{
    // TODO (Q5)
}

bool Queue::dequeue(int& value)
{
    return false;                   // TODO (Q5)
}

bool Queue::peek(int& value) const
{
    return false;                   // TODO (Q5)
}

bool Queue::isEmpty() const
{
    return true;                    // TODO (Q5)
}

int Queue::size() const
{
    return count;
}

void Queue::display() const
{
    cout << "front ->";
    // TODO (Q5)
    cout << " <- rear" << endl;
}