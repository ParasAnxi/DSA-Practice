#include <bits/stdc++.h> 
class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

Node* merge(Node* a, Node* b){
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    Node* result;
 
    if (a->data < b->data) {
        result = a;
        result->child = merge(a->child, b);
    }
    else {
        result = b;
        result->child = merge(a, b->child);
    }
    result->next = NULL;
    return result;
}
Node* flattenLinkedList(Node* head) 
{
    if(head == NULL)
        return head;
    
   Node* down = head;
   Node* right = head->next;
   down->next = NULL;
   right = flattenLinkedList(right);
    
    Node* ans = merge(down, right);
    return ans;
}
