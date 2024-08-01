#include<iostream>
#include<climits>
using namespace std;
int peak(int arr[],int size){
    int peak=0;
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<=end){
   if((arr[mid]<arr[mid+1]) ){
    peak=mid+1;
    start=mid+1;
   }
   else if(arr[mid]<arr[mid-1]){
    peak=mid-1;
    end=mid-1;
   }
   else if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1])){
    return mid;
   }
   mid=start+((end-start)/2);
}
return peak;}
int main(){
    int arr[10]={24,69,100,99,79,78,67,36,25,19};
    cout<<peak(arr,10)<<endl;
    cout<<"successfull";
}