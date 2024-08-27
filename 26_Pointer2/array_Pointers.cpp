#include<iostream>
using namespace std;
int main(){
char arr[10]={1,2,3};
char *p=arr;
 cout<<sizeof(p);
string s="hii";
string *ptr=&s;
cout<<*ptr;
   }