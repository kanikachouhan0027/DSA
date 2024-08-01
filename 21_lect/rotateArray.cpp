#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=3;
    for(int i=0,j=7-n;i<n,j<7;i++,j++){
        swap(arr[i],arr[j]);
    }
  //sorting rest array
    for(int i=0;i<7-n-1;i++){//specifies no of rounds
     int swapi=0;

       for(int k=n;k<7-1;k++){
        if(arr[k+1]<arr[k]){
            swap(arr[k+1],arr[k]);
            swapi=1;
           
        }
       }
       if(swapi==0){
        break;
       }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
