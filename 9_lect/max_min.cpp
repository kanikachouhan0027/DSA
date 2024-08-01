#include<iostream>
using namespace std;
int main(){
    int arr[4]={4,12,3,10};
    int max=0;
    for(int i=0;i<=3;i++ ){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=max;
    for(int i=0;i<=3;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl<<max<<endl;
}