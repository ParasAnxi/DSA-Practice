#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            char ch='A'+i+j-2;
            cout << ch << " ";
            j++;
            ch++;
            
        }
        i++;
        cout << endl;
    }
}