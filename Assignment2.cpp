#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int c=1;
    cout<<"Enter number>>";
    cin>>n;
    while (i<n)
    {
        i++;
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2){cout<<"Prime Number";}
    else{cout<<"Not a Prime Number";}
    
}