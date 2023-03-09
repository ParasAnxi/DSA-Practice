#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data to insert in left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data to insert in right of : "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}
void reverseLevelOrder(Node* root)
{
    stack <Node *> s;
    queue <Node *> q;
    q.push(root);

    while (!q.empty()){
        root = q.front();
        q.pop();
        s.push(root);
 
        if (root->right)
            q.push(root->right);
 
        if (root->left)
            q.push(root->left);
    }
 
   
    while (!s.empty()) {
        root = s.top();
        cout << root->data << " ";
        s.pop();
    }
}
int main(){
Node* root = NULL;
root = buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//1 2 4 -1 -1 5 -1 -1 3 -1 -1
reverseLevelOrder(root);
}

