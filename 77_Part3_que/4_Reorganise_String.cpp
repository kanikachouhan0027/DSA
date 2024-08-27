// 767. Reorganize String
// Medium

// 8530

// 258

// Add to List

// Share
// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

// Return any possible rearrangement of s or return "" if not possible.

 

// Example 1:

// Input: s = "aab"
// Output: "aba"
// Example 2:

// Input: s = "aaab"
// Output: ""
 

// Constraints:

// 1 <= s.length <= 500
// s consists of lowercase English letters.



//sol

// class Solution {
// public:
//    string reorganizeString(string s) {
//     // Step 1: Count character frequencies
//     unordered_map<char, int> charToCount;
//     for (int i = 0; i < s.length(); ++i) {
//         charToCount[s[i]]++;
//     }
    
//     // Step 2: Use a max heap to store the characters by their frequency
//     priority_queue<pair<int, char>> maxHeap;
//     for (unordered_map<char, int>::iterator it = charToCount.begin(); it != charToCount.end(); ++it) {
//          if(it->second>(s.length()+1)/2)
        // {
        //     return "";
        // }
        // maxHeap.push({it->second, it->first});
//     }
    
//     // Step 3: Rebuild the string
//     string result = "";
//     pair<int, char> prev = {-1, '#'}; // To keep track of the previous character
    
//     while (!maxHeap.empty()) {
//         pair<int, char> top = maxHeap.top();
//         maxHeap.pop();
        
//         // Append the current character to the result
//         result += top.second;
        
//         // If previous character's count is still > 0, push it back into the heap
//         if (prev.first > 0) {
//             maxHeap.push(prev);
//         }
        
//         // Update the previous character to the current one
//         prev = {top.first - 1, top.second}; // Decrement the count of the current character
//     }
    
//     // Step 4: Check the validity of the result
//     if (result.length() != s.length()) {
//         return "";
//     }
    
//     return result;
// }
// };