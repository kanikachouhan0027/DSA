#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
   arr.push_back(2);
   arr.push_back(6);
   arr.push_back(4);
   arr.push_back(5);
   arr.push_back(3);
   arr.push_back(10);
   int size=4;
   int n;
   cin>>n;
   int start=n;
   int end=size;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   for(int i:arr){
    cout<<i<<" ";
   }
}