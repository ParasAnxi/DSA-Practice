#include <bits/stdc++.h> 
using namespace std;
    class Node {
    public : 
        int data;
        Node *left;
        Node *right;

        Node(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool searchInBST(Node *root, int x) {
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        return searchInBST(root->left,x);
    }
    else{
        return searchInBST(root->right,x);
    }
}