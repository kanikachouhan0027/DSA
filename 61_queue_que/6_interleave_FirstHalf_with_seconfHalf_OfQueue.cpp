//que

// Interleave the First Half of the Queue with Second Half
// Difficulty: MediumAccuracy: 76.97%Submissions: 7K+Points: 4
// You are given a queue Q of N integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.

 

// Example 1:

// Input:
// N = 4
// Q = {2,4,3,1}
// Output:
// {2,3,4,1}
// Explanation:
// After the mentioned rearrangement of the first half
// and second half, our final queue will be {2,3,4,1}.
 

// Example 2:

// Input:
// N = 2
// Q = {3,5}
// Output:
// {3,5}
// Explanation:
// After the mentioned rearrangement of the first half
// and second half, our final queue will be {3,5}.
 

// Your Task:

// You don't need to read input or print anything. Your task is to complete the function rearrangeQueue() which takes a queue Q as input and returns the modified queue after the rearrangement.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

//solution
//approach1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> firsthalf;
        vector<int> secondhalf;
        vector<int> ans;
       int size=q.size();
        int k=q.size()/2;
        for(int i=0;i<k;i++)
        {
            firsthalf.push_back(q.front());//k elements
            q.pop();
        }
        while(!q.empty())//q.size()-k elements
        {
            secondhalf.push_back(q.front());
            q.pop();
        }
        int i=0;
        
        while(i<k)
        {
          ans.push_back(firsthalf[i]);
          ans.push_back(secondhalf[i]);
          i++;
        }
        if(size%2!=0)
       { ans.push_back(secondhalf[i]);}
            
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends