#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int i=0;
    int ans=0;
    int powerof10=1;
    int powerof2=1;
int newans=0;
    while (n!=0){
        int bit= n & 1;
        ans=(powerof10*bit)+ans;
        n=n>>1;
        i++;
        powerof10=powerof10*10;
        }
        cout<<"dec to bin  "<<ans<<endl;
        int j=1;
    while (ans!=0){
        int p=ans%10;
        if (p==1){
             int c=0;
            newans=(10*newans)+c;
        }
    if (p==0){
      int v=1;
        newans=(10*newans)+v;
    }
    
    ans=ans/10;
  j++;
    }
    cout<<"compliment  "<<newans<<endl;
int k=0;
int new2=0;

while(newans!=0){
    int digit= newans%10;
    new2=(digit*powerof2)+new2;
    
    newans=newans/10;
    powerof2=powerof2*2;
    k++;
}
 cout<<"finally  "<<new2;

    }

    
    
    
