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
    Node* newN = new Node;
    if (top == nullptr) {
        newN->data = value;
        newN->next = nullptr;
        top = newN;  //direkt top=newn yapamazsın datayı nexti gecirmezsen garbage alır.
        
    }
    else {
        newN->next = top;
        top = newN;
        newN->data = value;
    }
}

bool Stack::pop(int& value)
{
    if (top == nullptr) {
        return false;
    }
    else {
        Node* neww = top; //geçici bir node kutusu ikiside aynı kutuyu gösteriyor.
        value = neww->data;
        top = neww->next;
        delete neww;
        return true;

    }
}

bool Stack::peek(int& value) const
{
    if (top == nullptr) {
        return false;
    }
    else {
        value = top->data;  //top-datayı value değerine kopyalar, 
        return true;     //top->data=value olsaydı dışarıdan gelen value değeri eski top değerinin üstüne yzılır.
    }
}

bool Stack::isEmpty() const
{
    if (top == nullptr) {
        return true;
    }
    else { return false; }

}

    int Stack::size() const
    {
        int count = 0;
        if (top == nullptr) {
            count = 0;

        }
        Node* curr = top;

        if (top!=nullptr){
            while (curr != nullptr) {
                count++;
                curr = curr->next;
            }
        }
        return count;
    }

void Stack::clear()
{
    if (top == nullptr) return;

    else {
        while (top != nullptr) {
            Node* curr = top;
                top = top->next;
            delete curr;
            
        }
        return;
    }

}

void Stack::display() const
{
    cout << "top ->";
    // TODO: walk from top, print every value; "(empty)" if there is none
    cout << endl;
}
