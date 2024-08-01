#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arra[6]={1,2,3,4,5,6};
    reverse(arra,6);
     for(int i=0;i<6;i++){
        cout<<arra[i]<<" ";
    }
}