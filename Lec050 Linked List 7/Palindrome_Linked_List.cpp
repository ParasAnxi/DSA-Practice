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
#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
    bool isPalindromee(vector<int> v){
        int s = 0;
        int e = v.size()-1;
        while(s<=e){
            if(v[s]!=v[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
  public:
    bool isPalindrome(Node *head)
    {
        vector<int> v;
        
        Node* temp = head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        return isPalindromee(v);
    }
};