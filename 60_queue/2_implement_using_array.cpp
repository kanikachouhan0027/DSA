// #include <bits/stdc++.h> 
// class Queue {
// public:
// int size;
// int qfront;
// int rear;
// int* arr;


   
//     Queue() {
//         // Implement the Constructor
//        size=10001;
//        arr=new int[size];
//        qfront=0;
//        rear=0;
      
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         // Implement the isEmpty() function
//       if(qfront==rear)
//        {
//            return true;
//        }
//        return false;
//     }

//     void enqueue(int data) {
//         // Implement the enqueue() function
//         if(rear==size)
//         {
//             cout<<"queue overflow"<<endl;
//             return;
//         }
//         else
//         {
//             arr[rear]=data;
//             rear++;
//         }
//     }

//     int dequeue() {
//         // Implement the dequeue() function
//         if(isEmpty())
//       {
//         return -1;

//       }
//       else
//       {    
//            int popped_element=arr[qfront];
//            arr[qfront]=-1;
//            qfront++;      
//            if(qfront==rear)
//            {
//                qfront=0;
//                rear=0;
//            }
//            return  popped_element;
//       }
//     }

//     int front() {
//         // Implement the front() function
//         if(isEmpty())
//       {
//         return -1;

//       }
//       else
//       {
            
//            return arr[qfront];
//       }
//     }
// };