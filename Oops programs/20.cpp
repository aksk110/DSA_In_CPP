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

    // Delete a Node at start
    if (Head != NULL)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    // Delete a Node at end

    if (Head!=NULL)
    {
        // Only one Node is present
        if (Head->next==NULL)
        {
            Node *temp=Head;
            delete temp;
            Head=NULL;
        }
        
        // More than 1 Node is present

        Node *curr=Head;
        Node *prev=NULL;
        while (curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
        delete curr;
        prev->next=NULL;
    }

    // Delete a particular Node
    int x=2;
    if (Head!=NULL)
    {
        if(x==1)
        {
            Node *temp=Head;
            Head=Head->next;
            delete temp;
        }
        else
        {
            Node *curr=Head;
            Node *prev=NULL;
            x--;
            while (x--)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
    }
    
    

    // Print the values;

    Node *temp = Head;

    while (temp)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}