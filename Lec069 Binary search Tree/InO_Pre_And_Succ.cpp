#include <iostream>
using namespace std;
 
class Node{
    public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
 

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
    if (root == NULL)  return ;
 
    if (root->data == key){
        if (root->left != NULL){
            Node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
 
        if (root->right != NULL){
            Node* tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
 
    if (root->data > key){
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }
}
 
Node *newNode(int data){
    Node *temp =  new Node(data);
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
Node* insert(Node* root, int data){
    if (root == NULL) return newNode(data);
    if (data < root->data)
        root->left  = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
 
int main(){
    int key = 50; 
 
        /* 
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 
       */
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
 
    Node* pre = NULL, *suc = NULL;
 
    findPreSuc(root, pre, suc, key);
    if (pre != NULL)
      cout << "Predecessor is " << pre->data << endl;
    else
      cout << "No Predecessor";
 
    if (suc != NULL)
      cout << "Successor is " << suc->data;
    else
      cout << "No Successor";
    return 0;
}