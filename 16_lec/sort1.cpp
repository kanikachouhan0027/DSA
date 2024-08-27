#include<iostream>
#include<climits>
using namespace std;
void sort(int arr[],int size){
    int p=0;

  
    for(int i=0;i<size;i++){
        int min=INT_MAX;
        
    for(int j=i;j<size;j++){
    if(arr[j]<min){
    min=arr[j];
    p=j;}
    
    }/*for(int k=0;k<size;k++){
        if(arr[k]==min){
            p=k;
        }
        
    }*/
    swap(arr[i],arr[p]);
    cout<<arr[i]<<" ";
 }}
int main(){
    int arr[]={64,25,12,22,11};
    cout<<"the sorted array is : "<<endl;
    sort(arr,5);
    
}
