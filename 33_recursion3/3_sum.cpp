#include<iostream>
using namespace std;
int Sum(int arr[],int size,int sum){
    if(size==0){
        return sum;
    }
sum=sum+arr[0];
Sum(arr+1,size-1,sum);

}
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    sum=Sum(arr,5,sum);
    cout<<sum;
}