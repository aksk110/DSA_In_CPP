#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *CreatLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreatLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{

    // Insert the Node at end using recursion

    Node *Head;
    int arr[] = {2, 4, 6, 8, 10};
    Head = CreatLinkedList(arr, 0, 5);

    // Print the values;

    Node *temp = Head;

    while (temp)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}