#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count =1;
            break;
        }
    }
    if(count>0)
    {
        cout<<"not prime";
    }
    else
    {cout<<"prime";}
}