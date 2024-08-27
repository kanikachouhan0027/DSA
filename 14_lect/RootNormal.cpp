#include<iostream>
using namespace std;
int main(){
    int n;
    int sqrroot=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        sqrroot=i;
    }
    cout<<sqrroot;
}