//que

// Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

// NOTE:
// 1. You need to find the answer for every i (0 <= i < n)
// 2. In order to find the solution for every i you need to consider the string from starting position till ith position.

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(n)

//example
// Input: A = "aabc"
// Output: "a#bb"
// Explanation: For every ith character we will
// consider the string from index 0 till index i first non
// repeating character is as follow-
// "a" - first non-repeating character is 'a'
// "aa" - no non-repeating character so '#'
// "aab" - first non-repeating character is 'b'
// "aabc" - there are two non repeating characters 'b' and 'c', 
// first non-repeating character is 'b' because 'b' comes before
// 'c' in the stream.

//solution

// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    // Code here
// 		    string ans="";
// 		    unordered_map<char,int> count;
// 		    queue<char> q;
// 		    for(int i=0;i<A.size();i++)
// 		    {
// 		       char ch =A[i];
// 		        count[ch]++;
// 		        q.push(ch);
		        
// 		        while(!q.empty())
// 		        {
// 		            if(count[q.front()]>1)
// 		            {
// 		                //repeating 
// 		                q.pop();
// 		            }
// 		            else
// 		            {
// 		                //non repeating
// 		                ans.push_back(q.front());
// 		                break;
// 		            }
// 		        }
// 		        if(q.empty())
// 		        {
// 		            ans.push_back('#');
// 		        }
		        
// 		    }
// 		    return ans;
// 		}

// };

