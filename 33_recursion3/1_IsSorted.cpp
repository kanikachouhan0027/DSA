#include<iostream>
using namespace std;
bool IsSorted(int arr[],int i,int count,int length){
if(length==0){
    return true;
}
if(i+1>=length ){
    if(count==length-1){
        return true;
    }
    return false;
}
if(arr[i]<=arr[i+1]){
    count++;
}
i=i+1;
IsSorted( arr,i,count,length);

}
int main(){
    int arr[0]={};
    int arr1[1]={1};
    int i=0;
    int count=0;
    cout<<IsSorted(arr,i,count,0)<<endl;
    cout<<IsSorted(arr1,i,count,1)<<endl;
}