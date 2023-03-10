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
Node* buildTree(Node* &root){
    cout<<"Enter data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"To left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"To right of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
//In line
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
void levelOrderTree(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}
void reverseLevel(Node* root){
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        s.push(temp);
    
    if(temp->right)
        q.push(temp->right);
    
    if(temp->left)
        q.push(temp->left);
    }
    while(!s.empty()){
        Node* temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
    }
  }

// LNR
void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
//NLR
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
// LRN
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void buildFromLevelOrder(Node* &root) {
    queue<Node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new Node(data);
    
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new Node(rightData);
            q.push(temp->right);
        }
    }
 }
int main(){
    Node* root = NULL;
    // root = buildTree(root);
    // levelOrderTraversal(root);
    // inOrderTraversal(root);
    // preOrderTraversal(root);
    // postOrderTraversal(root);
    // levelOrderTree(root);
    // reverseLevel(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
}

    
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//  1 3 5 7 11 17 -1 -1 -1 -1 -1 -1