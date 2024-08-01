#include<iostream>
using namespace std;
int BS(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
if(key<arr[mid]){
    end=mid-1;
}
else{
    start=mid+1;
}
mid=start+((end-start)/2);
    }
return -1;
}

int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};
  cout<< BS(even,6,18);
  cout<<BS(odd,5,1);
}