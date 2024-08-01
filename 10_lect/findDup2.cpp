#include<iostream>
using namespace std;
int main(){
    int sum1=0;
    int sum2=0;
    int arr[]={6, 3 ,1 ,5, 4, 3, 2};
 for(int i=1;i<7;i++){
        sum1=sum1+i;
    }
    for(int j=0;j<7;j++){
        sum2=sum2+arr[j];
    }
    cout<<sum2-sum1;
}