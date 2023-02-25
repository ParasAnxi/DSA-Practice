#include<iostream>
using namespace std;
/*  Same variable name can be used in different Body
    A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

    Inside a function or a block which is called local variables,

    In the definition of function parameters which is called formal parameters.

    Outside of all functions which is called global variables.
*/
int main(){
    int n = 1;
     cout<<n<<endl;
    {
        int n=2;
        cout<<n<<endl;
    }
    {
        int n=3;
        cout<<n<<endl;
    }
    cout<<n<<endl;
}