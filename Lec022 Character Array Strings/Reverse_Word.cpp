#include <bits/stdc++.h>
using namespace std;

void reverse1(string s)
{
    vector<string> temp;
    string str = " ";
    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back(str);
            str = " ";
        }
        else
        {
            str += s[i];
        }
    }
    temp.push_back(str);
    int i;
    for (i = temp.size() - 1; i > 0; i--)
        cout << temp[i] << " ";
    cout << temp[0] << endl;
}
void reverse(vector<char> &s, int left, int right)
{
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
void reverseWords(vector<char> &s)
{
    int n = s.size();

    reverse(s, 0, n - 1);

    int start = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            reverse(s, start, i - 1);
            start = i + 1; 
        }
    }
}

int main()
{
    vector<char> s= {'M','y',' ', 'n','a','m','e',' ', 'i','s',' ', 'P','a','r','a','s'};

    reverseWords(s);
    for (char c : s)
    {
        cout << c <<" ";
    }
}