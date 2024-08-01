#include<iostream>
using namespace std;
int FindDup(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return arr[i];
                
            }
        }
    }
}
int main(){
    int arr[]={6, 3, 1 ,5 ,4, 3, 2};
    cout<<FindDup(arr,7);
}