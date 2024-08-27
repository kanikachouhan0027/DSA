#include<iostream>
using namespace std;
void Print(int arr[],int size){
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
 }
}
void SwapAlternates(int arr[],int size){
     for(int i=0;i+1<5;i=i+2){
 /*   swap(arr[i],arr[i+1]);*/
 int temp=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=temp;}
 
}
int main(){
 int arr[]={1,2,3,4,5};
 SwapAlternates ( arr,5);
 Print(arr,5);
 
 
}