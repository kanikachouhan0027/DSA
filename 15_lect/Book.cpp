#include<iostream>
using namespace std;
bool isSolution(int n,int m,int arr[],int mid){
   //n=no of students;
   //m=no of booksi.e size of array,mid=sum of pages
   int allBooks=0;
   int allStudent=0;
   for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
        sum=sum+arr[allBooks];
        if(sum<=mid){
        allBooks=allBooks+1; }
        else{
            break;
        }
       
    }
    allStudent=allStudent+1;
   }
   if(allBooks==m && allStudent==n){
 return 1;
   }
   else{
    return 0;
   }

}
int Ans(int n,int m,int arr[]){
int sum=0;
for(int i=0;i<m;i++){
    sum=sum+arr[i];}
int start=2;
int ans=-1;
int end=sum;//sum of all no of pages in all books
int mid=start+(end-start)/2;
while(start<=end){
        if( isSolution(n,m,arr,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={20,40,30,90};//arr.size is only valid for vectors not for plain arrays in cpp
    cout<<Ans(2,4,arr);
}