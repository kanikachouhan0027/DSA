#include<iostream>
using namespace std;
void printArray(int arr[4]){
    arr[1]=10;
    cout<<arr[1];
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int array[6]={1,2,3,4,5,6};

    printArray(array);
}