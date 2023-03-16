#include <bits/stdc++.h> 
using namespace std;
class BinaryTreeNode {
    public : 
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};

void inOrder(BinaryTreeNode* root, vector<int>& n) {
    if(root == NULL)
        return ;

    inOrder(root->left ,n);
    n.push_back(root->data);
    inOrder(root->right ,n);
}
bool twoSumInBST(BinaryTreeNode* root, int target) {
	vector<int> inO;
    inOrder(root,inO);
    int i = 0;
    int j = inO.size()-1;

    while(i<j){
        int sum = inO[i]+inO[j];
        if(sum == target)
            return true;
        else if(sum>target)
            j--;
        else
            i++;
    }
    return false;
}