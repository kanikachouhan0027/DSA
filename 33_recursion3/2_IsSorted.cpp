#include<iostream>
using namespace std;
bool IsSorted(int arr[],int size){
if(size==0 ||size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
else{
bool ans=IsSorted(arr+1,size-1);
}}
int main(){
    int arr[5]={1,4,2,3,5};
    int arr1[5]={0,9,10,30,40};
   
    cout<<IsSorted(arr,5)<<endl;
    cout<<IsSorted(arr1,5)<<endl;
}