// K-th Largest Sum Contiguous Subarray
// Difficulty: MediumAccuracy: 54.33%Submissions: 18K+Points: 4
// You are given an array arr. You have to find the K-th largest sum of contiguous subarray within the array elements. In other words, overall subarrays, find the subarray with kth largest sum and return its sum of elements.

// Examples:

// Input: arr[] = [3, 2, 1], k = 2 
// Output: 5
// Explanation: The different subarray sums we can get from the array are = [6, 5, 3, 2, 1]. Where 5 is the 2nd largest.
// Input: arr[] = [2, 6, 4, 1], k = 3
// Output: 11
// Explanation: The different subarray sums we can get from the arrayare = [13, 12, 11, 10, 8, 6, 5, 4, 2, 1]. Where 11 is the 3rd largest.
// Expected Time Complexity: O(n2 * log k)
// Expected Auxiliary Space: O(k)

// Constraints:
// 1 <= arr.size() <= 100
// 1 <= k <= (n*(n+1))/2
// -105 <= arr[i] <= 105

// sol
// class Solution {
//   public:
//     int kthLargest(vector<int> &arr, int k) {
        
        
//       priority_queue<int,vector<int>,greater<int>> minHeap;
// 	for(int i=0;i<arr.size();i++)
// 	{   int sum=0;
// 		for(int j=i;j<arr.size();j++)
// 		{
// 			sum+=arr[j];
// 			if(minHeap.size()<k)
// 			{
// 				minHeap.push(sum);
// 			}
// 			else{
// 				if(sum>minHeap.top())
// 				{
// 					minHeap.pop();
// 					minHeap.push(sum);
// 				}
// 			}
// 		}
// 	}



// 	return minHeap.top();
//     }
// };