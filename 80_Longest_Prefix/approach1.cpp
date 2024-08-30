// 14. Longest Common Prefix
// Easy

// 17807

// 4581

// Add to List

// Share
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.


// //code1
// //checking if whole string 1 exist if not then decrease the size and then again check

// string longestCommonPrefix(vector<string>& strs) {
//          string prefix=strs[0];
//     for(int i=1;i<strs.size();i++)
//     {
//         while(strs[i].find(prefix)!=0)
//         {
//             prefix=prefix.substr(0,prefix.length()-1);
//         }
//         if(prefix.empty())
//         {
//             return "";
//         }
//     }
//     return prefix;
//     }

// //code2--checking all char by char 
// string ans="";
//     for(int i=0;i<arr[0].size();i++)
//     {
//         char curr=arr[0][i];
//         bool match=true;
//         for(int j=1;j<arr.size();j++)
//         {
//             if(arr[j].size()<i || curr!=arr[j][i])
//             {
//                 match=false;
//                 break;
//             }
//         }
//         if(match==false)
//         {
//             break;
//         }
//         else{
//             ans.push_back(curr);
//         }
//     }
//     return ans;