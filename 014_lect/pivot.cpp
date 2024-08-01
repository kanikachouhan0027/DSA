#include<iostream>
using namespace std;
int findpivot(int arr[],int size){
 int start=0;
 int end=size-1;
 int mid=start+(end-start)/2;
 while(start<=end){
    if((arr[mid]<arr[mid+1]) && (arr[mid]<arr[mid-1])){
        return mid;
    }
    if(arr[mid]>=arr[0]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid=start+(end-start)/2;
 }
}
int main(){
    int arr[]={4,5,6,7,9,1,2,3};
    cout<<findpivot(arr,8);
}