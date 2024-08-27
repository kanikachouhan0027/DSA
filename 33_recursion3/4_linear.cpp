#include<iostream>
using namespace std;
bool Found(int arr[],int size,int key){
if(size==0){
    return false;
}
if(arr[0]==key){
    return true;
}
else{
bool remaining =Found(arr+1,size-1,key);
return remaining;
}}
int main(){
    int key;
    cin>>key;
    int arr[5]={3,5,1,2,6};
    int size=5;
    cout<<Found(arr,size,key);
}