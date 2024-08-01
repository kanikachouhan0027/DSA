#include<iostream>
using namespace std;
void up(int arr[],int size){
    for (int i=0;i<size;i++){
        arr[i]+=2;

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    up(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}