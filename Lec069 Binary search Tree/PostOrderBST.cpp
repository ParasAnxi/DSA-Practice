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
Node* insertIntoBst(Node* root ,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertIntoBst(root->right,data);
    }
    else{
        root->left = insertIntoBst(root->left,data);
    }
    return root;
}
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBst(root,data);
        cin>>data;
    }
}
int main(){
    Node* root = NULL;
    cout<<"Enter data : "<<endl;
    takeInput(root);
    postOrder(root);
}