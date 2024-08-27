#include<iostream>
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

  void deleteFromHeap()
  { 

    if(size==0)
    {
        cout<<"Nothing to delete"<<endl;
        return;
    }
    //step 1:- replace with last node
    arr[1]=arr[size];

    //step 2:- remove the last node
    size--;

    //step 3:-  take root node to correct position
   
   int parent=1;
   
   while(parent<size)
   {
    int leftChild=2*parent;
    int rightChild=2*parent+1;
    
    if(leftChild<size && arr[parent]<arr[leftChild])
    {
        
        swap(arr[leftChild],arr[parent]);
        parent = leftChild;
    }
    else if(rightChild<size && arr[parent]<arr[rightChild])
    {
         swap(arr[rightChild],arr[parent]);
         parent = rightChild;
    }
    else
    {
        return;
    }
   }
  }
  
  heap()
  {
    size=0;
    arr[0]=-1;
  }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
    h.deleteFromHeap();
    h.print();
}