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

    Node *Head;
    int arr[] = {2, 4, 6, 8, 10};
    Head = CreatLinkedList(arr, 0, 5);

    // Insert the Node at particular position
    int x = 3;
    int value = 30;

    Node *temp = Head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print the values;

    Node *tempr = Head;

    while (tempr)
    {
        cout << tempr->data << "  ";
        tempr = tempr->next;
    }
}