#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  n;
    cout<<"enter"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while (n!=0){
        int bit= n & 1;
        ans=(pow(10,i)*bit)+ans;
        n>>1;
        i++;
        
    }
    cout<<ans;
    
    
}
