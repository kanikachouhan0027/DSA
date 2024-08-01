//que
// Given an array A[] of size N and 
// a positive integer K, find the first 
// negative integer for each and every 
// window(contiguous subarray) of size K.
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(K)



//ans


// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
                                                 
//  queue<long long> q;
//  vector<long long> ans;
 
//  //processing first k size window
//  for(int i=0;i<K;i++)
//  {
//      if(A[i]<0)
//      {
//          q.push(i);
//      }
//  }
 
//  //storing ans for 1st window
 
//  if(q.size()>0)
//  {
//      ans.push_back(A[q.front()]);
//  }
//  else
//  {
//      ans.push_back(0);
//  }
 
//  //remaining windows
 
//  for(int i=K;i<N;i++)
//  {
//      //removing the index from queue if its out of window of size k
     
//      if(!q.empty() && (i-q.front()>=K))
//      {
//          q.pop();
//      }
     
//      //adding the current element if its negative
//      if(A[i]<0)
//      {
//          q.push(i);
//      }
     
     
//      //storing the ans
     
//       if(q.size()>0)
//  {
//      ans.push_back(A[q.front()]);
//  }
//  else
//  {
//      ans.push_back(0);
//  }
 
//  }
//    return ans;                                              
//  }