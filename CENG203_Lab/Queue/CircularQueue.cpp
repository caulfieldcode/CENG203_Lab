#include "CircularQueue.h"
#include <iostream>
using namespace std;

CircularQueue::CircularQueue()
{
    front = 0;
    count = 0;
}

bool CircularQueue::enqueue(int value)
{
    return false;                   // TODO (Q7)
}

bool CircularQueue::dequeue(int& value)
{
    return false;                   // TODO (Q7)
}

bool CircularQueue::peek(int& value) const
{
    return false;                   // TODO (Q7)
}

bool CircularQueue::isEmpty() const
{
    return true;                    // TODO (Q7)
}

bool CircularQueue::isFull() const
{
    return false;                   // TODO (Q7)
}

int CircularQueue::size() const
{
    return count;
}

void CircularQueue::display() const
{
    cout << "front ->";
    for (int i = 0; i < count; i++)
        cout << " " << items[(front + i) % CAPACITY];
    if (isEmpty())
        cout << " (empty)";
    cout << " <- rear   | array:";
    for (int i = 0; i < CAPACITY; i++)
        cout << " " << items[i];
    cout << "  front=" << front << " count=" << count << endl;
}