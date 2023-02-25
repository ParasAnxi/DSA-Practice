#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 0;
    while (i <= n)
    {
        int j = 0;
        while (j <=i)
        {
            cout << i-j+1<<" ";
            j++;
            
        }
        i++;
        cout << endl;
    }
}