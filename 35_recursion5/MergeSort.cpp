#include<iostream>
using namespace std;
int Merge(int arr[],int start,int end){
int count=0;
int mid=start+(end-start)/2;
int len1=mid-start+1;
int len2=end-mid;
int *first=new int[len1]; 
int *second=new int[len2]; 
//copy values
int k=start;
for(int i=0;i<len1;i++){
    first[i]=arr[k++];
   }
for(int i=0;i<len2;i++){
    second[i]=arr[k++];
  
}


//merge
int i=0;
int j=0;
k=start;
while(i<len1 && j<len2){
    if(first[i]<second[j]){
        arr[k]=first[i];
        i++;
        k++;
    }
    else{
        arr[k]=second[j];
        j++;
        k++;
        count+=(len1-i);
    }

}

while(i<len1){
    arr[k]=first[i];
    i++;
    k++;
}
while(j<len2){
    arr[k]=second[j];
    j++;
    k++;
}
//to prevent memory leakage;
delete [] first;
delete [] second;
return count;

}
int  MergeSort(int arr[],int start,int end){
    int count=0;
    if(start>=end){//start==end means single element which is sorted only;
        return count;
    }
    
int mid=start+(end-start)/2;
//sort left portion
count+=MergeSort(arr,start,mid);
//sort right portion
count+=MergeSort(arr,mid+1,end);

//merge two sorted arrays
count+=Merge(arr,start,end);
return count;

}

int main(){
    int arr[]={5,3,2,4,1};
    int size=5;

   int ans= MergeSort(arr,0,size-1);

cout<<ans;    
}