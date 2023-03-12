#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> postorderTraversal(Node* root)
{
    vector<int> res;
    Node* current = root;
 
    while (current != NULL) {
        // If right child is null,
        // put the current node data
        // in res. Move to left child.
        if (current->right == NULL) {
            res.push_back(current->data);
            current = current->left;
        }
        else {
            Node* predecessor = current->right;
            while (predecessor->left != NULL
                   && predecessor->left != current) {
                predecessor = predecessor->left;
            }
            // If left child doesn't point
            // to this node, then put in res
            // this node and make left
            // child point to this node
            if (predecessor->left == NULL) {
                res.push_back(current->data);
                predecessor->left = current;
                current = current->right;
            }
            // If the left child of inorder predecessor
            // already points to this node
            else {
                predecessor->left = NULL;
                current = current->left;
            }
        }
    }
    // reverse the res
    reverse(res.begin(), res.end());
    return res;
}