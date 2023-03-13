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
Node* min(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}
Node* deleteBST(Node* root , int val){
    if(root == NULL){
        return NULL;
    }
    if(root->data == val){
        if(root->left == NULL){
            delete root;
            return NULL;
        }
        if(root->left!= NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left== NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL){
            int mini = min(root->right)->data;
            root->data = mini;
            root->right = deleteBST(root->right,mini);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteBST(root->left,val);
        return root;
    }
    else{
        root->right = deleteBST(root->right,val);
        return root;
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
    root = deleteBST(root,30);
    levelOrderTraversal(root);
}