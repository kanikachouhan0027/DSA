#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  n;
    cout<<"enter"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    int powof10=1;
    while (n!=0){
        int bit= n & 1;
        ans=ans+powof10*bit;
        n= n >> 1;
        i++;
        powof10=powof10*10;
        
    }
    cout<<ans;

    
}

