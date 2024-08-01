#include<iostream>
using namespace std;
int Search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
       /* a*/ if(key>=arr[0]){//1st line of graph
       /*1st*/     if(arr[mid]>=0){
            if(arr[mid]==key){ return mid;}

            else if(key <arr[mid]){end=mid-1;}

            else{start=mid+1;}
            }

        /*2nd*/    else{
                end=mid-1;
            }}

         /*b*/   else{
            /*1st*/    if(arr[mid]<arr[0]){
            
                if(arr[mid]==key){
                return mid;}
            else if(key <arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }}
          /*2nd*/  else{
                start=mid+1;
            }
            }
            mid=start+(end-start)/2;
        }
        return -1;

    }
    int main(){
        int arr[]={3,8,10,17,1};
        cout<<Search(arr,5,11);
    }
