//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{
    Node *solve(int in[], int pre[], int inOrderStart, int inOrderEnd, int &preOrderIndex, int n, unordered_map<int, queue<int>> &mp)
    {
        if (preOrderIndex >= n || inOrderStart > inOrderEnd)
        {
            return NULL;
        }
        int element = pre[preOrderIndex++];
        Node *root = new Node(element);
        int pos = mp[element].front();
        mp[element].pop();
        root->left = solve(in, pre, inOrderStart, pos - 1, preOrderIndex, n, mp);
        root->right = solve(in, pre, pos + 1, inOrderEnd, preOrderIndex, n, mp);
        return root;
    }

public:
    Node *buildTree(int in[], int pre[], int n)
    {
        // Code here
        unordered_map<int, queue<int>> mp;
        for (int i = 0; i < n; i++)
            mp[in[i]].push(i);
        int preOrderIndex = 0;
        Node *ans = solve(in, pre, 0, n - 1, preOrderIndex, n, mp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int inorder[n], preorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> preorder[i];
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder, n);
        printPostOrder(root);
        cout << endl;
    }
}

// } Driver Code Ends