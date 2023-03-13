#include <bits/stdc++.h> 
    class Node 
    {
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

int solve(Node* root,int& i, int k){
    if(root == NULL){
        return -1;
    }
    int left = solve(root->left,i,k);
    if(left != -1){
        return left;
    }
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
}
int kthSmallest(Node* root, int k) {
    int i = 0;
    int ans = solve(root,i,k);
    return ans;
}