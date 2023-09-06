class Solution
{
private:
    void solve(Node *root, unordered_map<int, int> &mp, int k, int &count, int prev)
    {
        if (root == NULL)
        {
            return;
        }

        int curr = prev + root->data;

        if (mp.find(curr - k) != mp.end())
        {
            count += mp[curr - k];
        }

        if (curr == k)
        {
            count++;
        }

        mp[curr]++;

        solve(root->left, mp, k, count, curr);
        solve(root->right, mp, k, count, curr);

        mp[curr]--;
    }

public:
    int sumK(Node *root, int k)
    {
        unordered_map<int, int> mp;
        int count = 0;
        solve(root, mp, k, count, 0);
        return count;
    }
};