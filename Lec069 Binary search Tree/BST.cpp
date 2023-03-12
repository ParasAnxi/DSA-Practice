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
void levelOrderTraversal(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    } 
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
    levelOrderTraversal(root);
}