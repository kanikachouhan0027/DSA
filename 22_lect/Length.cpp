#include<iostream>
using namespace std;
int main(){
char name[10];
cin>>name;
cout<<name;
int length=0;
for(int i=0;;i++){
if(name[i]=='\0'){
    break;
}
else{
    length=length+1;
}
}
cout<<length;
}