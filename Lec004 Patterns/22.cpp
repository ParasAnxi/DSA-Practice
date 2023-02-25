#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    
    while (i <= n)
    {
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j = n-i+1;
        while (j)
        {

            cout << i;
            j--;
            
        }
        i++;
        cout << endl;
    }
    
}