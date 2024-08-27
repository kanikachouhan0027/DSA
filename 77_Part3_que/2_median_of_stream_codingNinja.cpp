// Median in a stream
// Hard
// 120/120
// Average time to solve is 50m
// Contributed by
// 144 upvotes
// Asked in companies
// Problem statement
// Given that integers are read from a data stream. Your task is to find the median of the elements read so far.

// Median is the middle value in an ordered integer list. If the size of the list is even there is no middle value. So the median is the floor of the average of the two middle values.

// For example :
// [2,3,4] - median is 3.
// [2,3] - median is floor((2+3)/2) = 2.


// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= 10^4
// 0 <= data <= 10^8
// Where T is the number of test cases, N is the number of elements in the data stream.

// Time Limit : 1 sec
// Sample Input 1:
// 3
// 3
// 1 2 3 
// 2
// 9 9 
// 1
// 4 
// Sample Output 1:
// 1 1 2
// 9 9 
// 4 
// Explanation for Sample Input 1:
// For test case 1 
// After reading first element of stream , Median of [1] is 1 
// After reading second element of stream, Median of [1, 2]  = floor((1+2)/2)  = 1
// After reading third element of stream, Median of [1,2,3] = 2
// So the output will be 1 1 2.
// Sample Input 2:
// 2
// 3
// 5 3 8
// 2
// 3 8
// Sample Output 2:
// 5 4 5
// 3 5
// Explanation for Sample Input 2:
// For test case 1 
// After reading first element of stream, Median of [5] is 5
// After reading second element of stream, Median of [5, 3]  = floor((5+3)/2)  = 4
// After reading third element of stream, Median of [5,3,8] = 5 , it is the middle value of the sorted array
// So the output will be 5 4 5.

// #include<queue>

// int signum(int a,int b)
// {
// 	if(a==b)
// 	return 0;

// 	if(a > b)
// 	return 1;

// 	if(a < b)
// 	return -1;
// }

// void call_median(int element,priority_queue<int> &maxi,priority_queue<int,vector<int>,greater<int>> &mini,int &median)
// {
// 	switch(signum(maxi.size(),mini.size()))
// 	{
// 		case 0:
// 		       	if(element>median)
// 				   {
// 					   mini.push(element);
// 					   median=mini.top();
// 				   }
// 				   else
// 				   {	
// 					   maxi.push(element);
// 					   median=maxi.top();
// 				   }
// 				   break;

// 		case 1:
// 				if(element > median)
// 				{
// 					mini.push(element);
// 					median=(maxi.top()+mini.top())/2;
// 				}
// 				else
// 				{  //push in maxi
// 					mini.push(maxi.top());
// 					maxi.pop();
// 					maxi.push(element);
// 					median=(maxi.top()+mini.top())/2;
// 				}
// 				break;
		
// 		case -1:

// 				if(element > median)
// 				{   
// 					maxi.push(mini.top());
// 					mini.pop();
// 					mini.push(element);
// 					median=(maxi.top()+mini.top())/2;
					
// 				}
// 				else
// 				{  //push in maxi
// 					maxi.push(element);
// 					median=(maxi.top()+mini.top())/2;
// 				}
// 				break;		

// 	}
// }

// vector<int> findMedian(vector<int> &arr, int n)
// {
// 	vector<int> ans;
// 	int median=0;
// 	priority_queue<int> maxi;
// 	priority_queue<int,vector<int>,greater<int>> mini;

// 	for(int i=0;i<n;i++)
// 	{
// 		call_median(arr[i],maxi,mini,median);
// 		ans.push_back(median);
// 	}
// 	return ans;
// }