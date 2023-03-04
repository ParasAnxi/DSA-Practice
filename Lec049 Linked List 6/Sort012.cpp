#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *sortLL(Node *head)
{
    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCnt++;
        }
        else if (temp->data == 1)
        {
            oneCnt++;
        }
        else
        {
            twoCnt++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zeroCnt != 0)
        {
            temp->data = 0;
            zeroCnt--;
        }
        else if (oneCnt != 0)
        {
            temp->data = 1;
            oneCnt--;
        }
        else
        {
            temp->data = 2;
            twoCnt--;
        }
        temp = temp->next;
    }
    return head;
}