#include<iostream>
using namespace std;

int main()
{
    // input should be odd
    int n=8;  //input

    //top part (pyramid)
    for(int r=1 ; r<=n; ++r) //loop for top part row
    {
        for(int sp=1; sp<=2*(n+2) ; ++sp)  //loop for constyant spacing
        cout<< " ";
        for(int sp=n; sp>r ; --sp)  //loop for pyramid spacing
        cout<< " ";
        for(int ast=1; ast<=r; ++ast)  //loop for pyramid asterics printing
        cout<<"* ";
        cout<<"\n";      
    }
}