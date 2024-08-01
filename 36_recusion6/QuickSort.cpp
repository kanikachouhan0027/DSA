#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
//take pivot
int pivot=arr[start];
//count all smaller than pivot
int count=0;
for(int i=start+1;i<=end;i++){
    if(arr[i]<=pivot){
        count++;
    }
}
//placing pivot at right place
int PivotIndex=start+count;
swap(arr[start],arr[PivotIndex]);

//left and right wala part 
int i=start,j=end;
while(i<PivotIndex && j>PivotIndex)
{
    while(arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>=pivot)
    {
        j--;
    }

    if(i<PivotIndex && j>PivotIndex)
    {
        swap(arr[i++],arr[j--]);
    }
}
return PivotIndex;
}

void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
       return;
    }
 //partition
    int p=partition(arr,start,end);
    //left part sort
    quicksort(arr,start,p-1);
    //right part sort
    quicksort(arr,p+1,end);
}

int main()
{
    int arr[8]={2,4,1,6,9,9,9,9};
    int n=8;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}