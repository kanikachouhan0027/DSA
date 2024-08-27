#include<iostream>
using namespace std;
int sum_prime(int arr[],int size){
   
    int  sum=0;
for(int i=0;i<size;i++){
     int count =0;
for(int j=2;j<=(arr[i]-1);j++){
    if(arr[i]%j==0){
        count =count+1;
        break;
       }
    
}
if(count==0){
   sum=sum+arr[i];
}

}
return sum;
}
int main(){
    int arr[10];
    int size;
    cin>>size;
    cout<<"enter the elements"<<endl;
  
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum is: "<<sum_prime(arr,size)<<endl;
}