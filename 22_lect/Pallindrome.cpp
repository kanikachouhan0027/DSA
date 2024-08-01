#include<iostream>
using namespace std;
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count=count+1;
    }
    return count;}
int main(){
char name[10];
cin>>name;
int len=length(name);
int start=0;
int count=0;
int end=len-1;
    while(start<=end){
         if (name[start]==name[end]){
                count=10;
                }
                else{count=0;
                    break;}
    start++;
    end--;}
    if(count==10){
        cout<<"pallindrome";
    }
    else{
        cout<<"not a pallindrome";}
cout<<name;
}