#include<iostream>
using namespace std;
bool Search(int arr[],int start,int end,int key){
    int mid=start+(end-start)/2;
    if(start>end)
        return false;
    
    if(arr[mid]==key)
        return true;
    
    else{
        if(arr[mid]<key)
          return Search(arr,mid+1,end,key);
        else
          return Search(arr,start,mid-1,key);

        
    }
}
int main(){
    int key;
    cin>>key;
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int start=0;
    int end=size-1;
    bool ans=Search(arr,start,end,key);
    cout<<ans;
}