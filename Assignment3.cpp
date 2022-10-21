//Guessing number 157
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Guess number\n";
    while(true){
        cin>>n;
        if(n<157){cout<<"Guess greater number\n";}
        else if(n>157){cout<<"Guess smaller number\n";}
        else{cout<<"Correct Answer!";
        break;}
    }
}
