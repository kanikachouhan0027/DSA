#include<iostream>
using namespace std;
int main(){
   /* int num=10;
    int *p=&num;
    cout<<p<<endl;
    *p=*p+1;
    p=p+1;//p is pointing to next integer;
    cout<<*p<<endl;
    cout<<p;
    int num=10;
    int *p=&num;
    int *q=p;
    *q=*q+1;
    cout<<num;
    int *ptr=0;  
    cout<<ptr;
   
    char s[] = "hii\0ii";
    char*p = s; // Corrected assignment: address of s
    cout << p << endl; // Dereference the pointer to print the string*/
    int arr[]={1,2,3,4};
    int *p=arr+1;
    cout<<*p;
    return 0;


}