#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    
    while (i <= n)
    {
        int j = n-i+1;
        while (j)
        {

            cout << "*";
            j--;
            
        }
        i++;
        cout << endl;
    }
    
}