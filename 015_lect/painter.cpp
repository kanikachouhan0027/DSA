#include<iostream>
using namespace std;
bool ispossible(int k,int n,int arr[],int mid){
int time=0;
int painter=1;
for(int i=0;i<n;i++){
if(time+arr[i]<=mid){
    time=time+arr[i];
}
else{
    painter=painter+1;
    if(painter>k|| arr[i]>mid)
{
    return false;
}
time=arr[i];
}


}
return true;
}



int Time(int k,int n,int arr[]){
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int start=0;
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(k,n,arr,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={2,1,5,6,2,3};
    cout<<Time( 2, 6, arr);
    }
