#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    return sum;
}
int main(){
    int arr[100];
    int length;
    cin>>length;
    cout<<"enter elements"<<endl;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    cout<<"sum of all numbers of array is: "<<sum(arr,length)<<endl;
}