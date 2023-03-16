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

void convertLL(TreeNode<int> *root, TreeNode<int> *&head){
    if(root == NULL)
        return;

    convertLL(root->right, head);
    root->right = head;

    if(head != NULL)
        head->left = root;
    head = root;
    convertLL(root->left, head);
}

TreeNode<int> *mergeLL(TreeNode<int> *head1, TreeNode<int> *head2)
{
    TreeNode<int> *tail = NULL;
    TreeNode<int> *head = NULL;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data) 
        {
            if (head == NULL)
            {
                head = head1;
                tail = head;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if (head == NULL)
            {
                head = head2;
                tail = head;
                head2 = head2->right;
            }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }
    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while (head2 != NULL)
    {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    return head;
}

int count(TreeNode<int> *&head){

    TreeNode<int> *temp = head;
    int cnt = 0;
    while(temp!= NULL){
        cnt++;
        temp = temp->right;
    }
    return cnt;
}


TreeNode<int>* LLtoBST(TreeNode<int> *&head, int n){
    if(head == NULL || n <= 0)
        return NULL;
    TreeNode<int> *left;
    left = LLtoBST(head, n/2);
    TreeNode<int> *root = head;
    root->left = left;
    head = head->right;
    root->right = LLtoBST(head, n-n/2-1);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){

    TreeNode<int> *head1 = NULL;
    convertLL(root1, head1);
    head1->left = NULL;

    TreeNode<int> *head2 = NULL;
    convertLL(root2, head2);
    head2->left = NULL;

    TreeNode<int> *head = mergeLL(head1, head2);
    TreeNode<int> *root = LLtoBST(head, count(head));
    return root;
}