#include<iostream>
using namespace std;
void SayDigits(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    SayDigits(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cin>>n;
     string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    SayDigits(n,arr);
}