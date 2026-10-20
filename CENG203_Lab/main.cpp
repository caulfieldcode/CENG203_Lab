// CENG203_Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Labs/Labs.h"

using namespace std;

int main()
{

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 3:
        cout << " 3. Week 3 - Linked lists" << endl;
        runWeek03();
        break;

    case 4:
        cout << " 4. Week 4 - Stacks and queues" << endl;
        runWeek04();
        break;
}

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
