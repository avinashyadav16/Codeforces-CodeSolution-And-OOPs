/**
*  @file: 01_LinkedList.c++
*  @author: Avinash Yadav
*  @brief: Singly Linked List In CPP
*  @date: 19-10-2023  
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertNode(int);
    void PrintSList();
    void deleteNode(int);
};

void LinkedList::insertNode(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::PrintSList()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List Empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::deleteNode(int nodeoffset)
{
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
    if (head == NULL)
    {
        cout << "List Empty" << endl;
        return;
    }
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        ListLen++;
    }
    if (ListLen < nodeoffset)
    {
        cout << "Out of range" << endl;
        return;
    }
    temp1 = head;
    if (nodeoffset == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }
    while ((nodeoffset--) > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}

int main()
{
    LinkedList list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    cout << "Elements of the list are" << endl;
    list.PrintSList();
    list.deleteNode(2);
    cout << "Elements of the list are" << endl;
    list.PrintSList();
    return 0;
}
