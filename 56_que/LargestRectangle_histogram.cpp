// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

//solution

// class Solution {
//     private:
//     vector<int> nextSmallerElement(vector<int>& heights,int n)
        
//     {   vector<int> ans(n);
//         stack<int> s;    
//         s.push(-1);
     
//     for(int i=n-1;i>=0;i--)
//     {
//     while(s.top()!=-1 && heights[s.top()]>=heights[i])
//     { s.pop();}
 
//     ans[i]=s.top();
//     s.push(i);
    
//     }
//     return ans;
//     }
    
//     vector<int> PrevSmallerElement(vector<int>& heights,int n)
//     {   vector<int> ans(n);
//         stack<int> s;    
//     s.push(-1);
     
//     for(int i=0;i<n;i++)
//     {
//     while(s.top()!=-1 && heights[s.top()]>=heights[i])
//     { s.pop();}
    
   
//       ans[i]=s.top();
//         s.push(i);
    
//     }
//     return ans;
//     }
    
    
// public:
//     int largestRectangleArea(vector<int>& heights) {
        
//         int n=heights.size();
        
//         vector<int> next(n);
//         next = nextSmallerElement(heights,n);
        
//         vector<int> Prev(n);
//         Prev=PrevSmallerElement(heights,n);
        
//        int area=INT_MIN;
        
//         for(int i=0;i<n;i++)
//         {
//          int l=heights[i];
            
//          if(next[i]==-1)
//          {
//           next[i]=n;
//          }
            
//             int b=next[i]-Prev[i]-1;
            
//             int newarea=l*b;
            
//             area=max(area,newarea);
        
//         }
//         return area;
//     }
// };