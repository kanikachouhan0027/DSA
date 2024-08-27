// Kth Smallest
// Difficulty: MediumAccuracy: 35.17%Submissions: 628K+Points: 4
// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

// Follow up: Don't solve it using the inbuilt sort function.

// Examples :

// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output:  7
// Explanation: 3rd smallest element in the given array is 7.
// Input: arr[] = [7, 10, 4, 20, 15], k = 4 
// Output:  15
// Explanation: 4th smallest element in the given array is 15.
// Expected Time Complexity: O(n+(max_element) )
// Expected Auxiliary Space: O(max_element)
// Constraints:
// 1 <= arr.size <= 106
// 1<= arr[i] <= 106
// 1 <= k <= n

//sol

// int kthSmallest(vector<int> &arr, int k) {
//      priority_queue<int> maxHeap;
//      int size=arr.size();
     
//      //creating maxheap of first k elements
//      for(int i=0;i<k;i++)
//      {
//         maxHeap.push(arr[i]); 
//      }
     
     
//      //k small elments in heap
//      for(int i=k;i<size;i++)
//      {
//         if(arr[i]<maxHeap.top())
//         {
//             maxHeap.pop();
//             maxHeap.push(arr[i]);
//         }
//      }
     
//      return maxHeap.top();
//     }