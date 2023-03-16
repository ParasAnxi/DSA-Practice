#include <bits/stdc++.h> 
using namespace std;
	class binaryTreeNode{

	public :
		int data ;
		binaryTreeNode* left ;
		binaryTreeNode* right;

		binaryTreeNode(int data)
		{
			this -> data = data;
			this -> left = NULL;
			this -> right = NULL;
		}
	};


vector<int> findPreSuc(binaryTreeNode *root, int key)
{
	vector<int> ans;
	binaryTreeNode* temp = root;
	int pre = -1;
	int suc = -1;

	while(temp->data!=key){
		if(temp->data>key){
			suc = temp->data;
			temp=temp->left;
		}
		else{
			pre = temp->data;
			temp=temp->right;
		}
	}
	binaryTreeNode* leftTree = temp->left;
	while(leftTree!=NULL){
		pre = leftTree->data;
		leftTree = leftTree->right;
	}
	binaryTreeNode* rightTree = temp->right;
	while(rightTree!=NULL){
		suc = rightTree->data;
		rightTree = rightTree->left;
	}
	ans.push_back(pre);
	ans.push_back(suc);
	return ans;
}