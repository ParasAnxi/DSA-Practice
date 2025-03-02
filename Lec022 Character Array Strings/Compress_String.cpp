#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int j = 0;
        int n = chars.size();
        for (int i = 0; i < n;)
        {
            int count = 0;
            int currChar = chars[i];
            while (i < n && currChar == chars[i])
            {
                count++;
                i++;
            }
            chars[j++] = currChar;
            if (count > 1)
            {
                string st = to_string(count);
                for (auto &i : st)
                {
                    chars[j++] = i;
                }
            }
        }
        return j;
    }
};