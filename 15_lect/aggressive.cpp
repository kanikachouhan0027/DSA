#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,3,1,6};
    int n=5;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=max;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum distance= "<<max-min;
}