#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}