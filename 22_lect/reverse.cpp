#include<iostream>
using namespace std;
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count=count+1;
    }
    return count;
}
void reverse(char arr[],int len){
    int start=0;
    int end=len-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
char name[10];
cin>>name;
int len=length(name);
reverse(name,len);
cout<<name;
}