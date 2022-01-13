#include<iostream>
using namespace std;

int main()
{
    // input should be odd
    int n=50;  //input

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

    //middle part
    //upper middle part
    for(int r=1; r<=(n+3)/2 ; ++r)
    {
        for(int sp=1; sp<=3*(r-1)+1; ++sp)
        cout<<" ";
        for(int ast=3*(n+1) ; ast >= 3*(r-1)+1; --ast)
        cout<<"* ";
        cout<<"\n";
    }

    //Lower middle part
    for(int r=1; r<= n/2-1 ; ++r) //loop for lower middle part row
    {
        for(int sp=3*(n+1)/2 ; sp>=r; --sp) //loop for space trapezoid
        cout<<" ";
        for(int ast=1; ast <= (3*n+3)/2 +r; ++ast)  //loop for asteric printing
        cout<<"* ";
        cout<<"\n";
    }

    //bottom part
    for(int r=1;  r<= (n+1)/2 ; ++r)
    {
        for(int sp=(2*n+7)/2 ; sp>=r; --sp)
        cout<<" ";
        for(int ast=n; ast>2*(r-1) ; --ast)
        cout<<"* ";
        for(int sp = 1; sp <= 10*(r-1)+2 ; ++sp)
        cout<<" ";
        for(int ast = n; ast> 2*(r-1) ; --ast)
        cout<<"* ";
        cout<<"\n";
        
    }

}