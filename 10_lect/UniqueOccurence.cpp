#include<iostream>

using namespace std;
bool uniqueOccurrences(int arr[],int size) {
        int Number[10];
        int p=0;
    for(int i=0;i<size;i++){
        int count=1;
        
        int reverse=0;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){    
                reverse=reverse+1;           
                break;}
           }
        if(reverse==0){
        for(int k=i+1;k<size;k++){
            if(arr[i]==arr[k])
            count =count +1;}
            Number[p]=count;
            p=p+1;}}
    for(int i=0;i<=p;i++){
        for(int j=i+1;j<=p;j++){
        if(Number[i]==Number[j]){
            return false;}}}

      return true;
      }
int main(){
     int arr[]={-12,9,9,10,-12,5,9,9,-3,-3,-3,9,5,-3,-12};
     cout<<uniqueOccurrences(arr,15);
     }