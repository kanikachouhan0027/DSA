#include<iostream>
using namespace std;
int first(int arr[],int size,int key){
    int ans=0;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
if(arr[mid]==key){
    ans=mid;
    end=mid-1;
}
if(arr[mid]>key){
    end=mid-1;
}
else{
    start=mid+1;
    }
    mid=start+(end-start)/2;
    }
if(ans==0){
    return -1;
}
return ans;
}
int last(int arr[],int size,int key){
    int ans=0;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
if(arr[mid]==key){
    ans=mid;
    start=mid+1;
}
if(arr[mid]>key){
    end=mid-1;
}
else{
    start=mid+1;
    }
    mid=start+(end-start)/2;
    }
if(ans==0){
    return -1;
}
return ans;
}
int main(){
    int arr[5]={0,1,3,3,5};
    cout<<first(arr,5,6)<<endl;
    cout<<last(arr,5,6);
}
