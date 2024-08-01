#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}}
int main(){
    int arr[]={7,1,6,9};
   bubble(arr,4);
   for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
   }
}