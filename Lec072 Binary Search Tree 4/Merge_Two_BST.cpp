#include <bits/stdc++.h> 
using namespace std;
    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };


void inOrder(TreeNode<int>* root ,vector<int> &io){
    if(root==NULL)
        return;

    inOrder(root->left,io);
    io.push_back(root->data);
    inOrder(root->right,io);
}
vector<int> mergeArray(vector<int>& a, vector<int>&b){
    vector<int> ans(a.size()+b.size());
    int i = 0, j=0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++]= a[i++];
        }
        else{
            ans[k++] = b[j++];
        }
    }
    while(i<a.size()){
        ans[k++]= a[i++];
    }
    while(j<b.size()){
        ans[k++]= b[j++];
    }
    return ans;
}
TreeNode<int>* inOToBst(int s,int e,vector<int>& inO){
    if(s>e)
        return NULL;

    int mid = (s+e)/2;
    TreeNode<int>*root = new TreeNode<int> (inO[mid]);

    root->left = inOToBst(s,mid-1,inO);
    root->right = inOToBst(mid+1,e,inO);
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int> bst1,bst2;
    inOrder(root1 , bst1);
    inOrder(root2 , bst2);

    vector<int> mergeArr = mergeArray(bst1,bst2);

    int s = 0;
    int e = mergeArr.size()-1;
    return inOToBst(s,  e, mergeArr);
}