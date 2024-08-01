#include<iostream>
using namespace std;
float SqrRoot(float key){
    float s=0;
    float e=key;
    float mid=s+(e-s)/2;
    float root=0;
    while(s<=e){
        if((mid*mid)==key){
            return mid;
        }
        else if((mid*mid)<key){
            s=mid+1;
            root=mid;
        }
        else if((mid*mid)>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return root;
}
int main(){
    float n;
    cin>>n;
    cout<<"root is: "<<SqrRoot(n);
}