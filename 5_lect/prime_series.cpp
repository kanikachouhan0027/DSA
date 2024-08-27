#include<iostream>
using namespace std;
int main(){
    cout<<"print the number"<<endl;
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int sum=0;
        for (int j=2;j<=i-1;j++)
{
    if (i%j==0){
        sum=1;
        break;
    }
     
}
if (sum==0){
    cout<<i<<endl;
}            
        
        }}
    