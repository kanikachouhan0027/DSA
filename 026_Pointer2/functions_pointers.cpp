#include<iostream>
using namespace std;
void update(int *p){
    *p=*p+1;
}
int main(){
    int value=5;
    int *p=&value;
    cout<<"before"<<*p;
    update(p);
    cout<<"after"<<*p;
}