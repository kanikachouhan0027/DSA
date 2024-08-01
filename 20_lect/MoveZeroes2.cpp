#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,3,12,0};
   for(int i=0;i<6-1;i++){
    for(int j=0;j<6;j++){
        if(arr[j]!=0 && arr[j-1]==0){
            swap(arr[j-1],arr[j]);
        }
    }
   }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }}