#include<iostream>
using namespace std;

int PowerOF2(int n){
    if(n==0){    //n==1
        return 1; //return 2;
    }
    int smallerProblem=PowerOF2(n-1);
    int biggerProblem=2*smallerProblem;
    return biggerProblem;
}
int main(){
    int n;
    cin>>n;
    int ans=PowerOF2(n);
    cout<<ans;
}