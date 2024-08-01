#include<iostream>
using namespace std;
bool find(int arr[],int size,int num){
int  count=0;
for(int i=0;i<size;i++){
    if(arr[i]==num){
        return 1;
    }
}
return 0;
}
int main(){
    int n;
    int arr[100];
    int size;
    cout<<"enter size: "<<endl;
    cin>>size;
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter which element you want to find: "<<endl;
    cin>>n;
    if(find(arr,size,n)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl; 
    }
}