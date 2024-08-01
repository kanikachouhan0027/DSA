#include<iostream>
#include<climits>
#include<cmath>

#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

int i=1;
int ans=0;
while(n!=0 ){

    int digit=n%10;
    if(ans>INT_MAX/10|| ans<INT_MIN/10){
        cout<<"0";
        return 0;
    }
    ans=(10*ans)+digit;
    n=n/10;
    i++;}
cout<<ans;
}
    






