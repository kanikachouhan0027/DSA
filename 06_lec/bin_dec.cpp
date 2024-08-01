#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  n;
    cout<<"enter"<<endl;
    cin>>n;
    int ans=0;
    int powof2=1;
   
    for (int i=0;;i++){
        if (n!=0){
            int bit=n%10;
            ans=ans+(bit*powof2);
            n=n/10;
            powof2=powof2*2;
        }
        else{
            break;
        }
    }
    cout<<ans;

    
}

