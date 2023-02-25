#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {

        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int t = i - 1;
        while (t)
        {
            cout << t;
            t--;
        }
        cout << endl;
        i++;
    }
}