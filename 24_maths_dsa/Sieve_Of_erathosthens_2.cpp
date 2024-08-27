#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> Prime(n+1,true);
    int count=0;
    Prime[0]=Prime[1]=0;
    for(int i=2;i<n;i++)
    {
         if(Prime[i])
         {
            count=count+1;
            for(int j=i*2;j<n;j=j+i){
               Prime[j]=0;
            }
        }
    }
cout<<count;
}