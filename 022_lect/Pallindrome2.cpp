/*Problem statement
You are given a string 'S'. Your task is to check whether the string is palindrome or not. 
For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
Note :String 'S' is NOT case sensitive.
Example:
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase,
we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.*/

//main code:-solution
#include<iostream>
using namespace std;
int length(char arr[]){
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count=count+1;
        i++;}
    return count;}

char toLowercase(char ch)
    {if(ch>='a' && ch<='z')
       {return ch;}
    else
        {ch=ch-'A'+'a';}
    return ch;}

bool Check_Pallindrome(char arr[]){
    int start=0;
    int end=length(arr)-1;
    while(start<=end){
       if((arr[start]>=32 && arr[start]<=47) || (arr[start]>=58 && arr[start]<=64) || (arr[start]>=91 && arr[start]<=96) ||
       (arr[start]>=123 && arr[start]<=126))
        {start++;}

        if((arr[end]>=32 && arr[end]<=47) || (arr[end]>=58 && arr[end]<=64) || (arr[end]>=91 && arr[end]<=96) ||
       (arr[end]>=123 && arr[end]<=126))
        {end--;}

       else{
          if(toLowercase(arr[start])!=toLowercase(arr[end])){
            return 0;
          }
          else{
            start++;
            end--;
          }
    }}
    return 1;
}

int main(){
char string[100];
cin>>string;
cout<<"pallindrome or Not"<<":-"<<Check_Pallindrome(string);
}