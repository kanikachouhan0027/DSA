#include<iostream>

using namespace std;

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    int start1=0;
    int start2=0;
    int i=0;
while(start1<5 && start2<3){
if(arr1[start1]<arr2[start2]){
    arr3[i]=arr1[start1];
    start1++;
    i++;
}
else{
    arr3[i]=arr2[start2];
    start2++;
    i++;
}}
while(start1<5){
    arr3[i]=arr1[start1];
    start1++;
    i++;
}
while(start2<3){
    arr3[i]=arr2[start2];
    start2++;
    i++;
}
for(int k=0;k<i;k++){
    cout<<arr3[k]<< " ";
}

}



    
   

