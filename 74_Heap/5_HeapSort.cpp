#include<iostream>
#include<vector>
using namespace std;
class heap
{
  public:
  int arr[100];
  int size;
  
  void insert(int val)
  {
    size++;
    int index=size;
    arr[index]=val;

    while(index>1)
    {
        int parent=index/2;
        if(arr[parent]<arr[index])
        {
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else
        {    
            return;
        }
    }

  }


  void print()
  {
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }


  heap()
  {
    size=0;
    arr[0]=-1;
  }
};
void Heapify(int arr[],int i,int n)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    //<=n since 1 based indexing
    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        Heapify(arr,largest,n);
    }

}

void heapSort(int arr[],int n)
{
    int size=n;
    while(size>1)
    {
        swap(arr[1],arr[size]);
        size--;

        Heapify(arr,1,size);
    }


}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
    int arr[]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        Heapify(arr,i,n);
    }
   
   cout<<"Printing the heap: "<<endl;
   for(int i=1;i<=n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
 


heapSort(arr,n);

cout<<"Printing the SortedHeap: "<<endl;
for(int i=1;i<=n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}