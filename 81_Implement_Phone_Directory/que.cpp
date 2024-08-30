// Phone directory
// Difficulty: HardAccuracy: 25.68%Submissions: 41K+Points: 8
// Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.
// Note: If there is no match between query and contacts, print "0".

// Example 1:

// Input: 
// n = 3
// contact[] = {"geeikistest", "geeksforgeeks", 
// "geeksfortest"}
// s = "geeips"
// Output:
// geeikistest geeksforgeeks geeksfortest
// geeikistest geeksforgeeks geeksfortest
// geeikistest geeksforgeeks geeksfortest
// geeikistest
// 0
// 0
// Explaination: By running the search query on 
// contact list for "g" we get: "geeikistest", 
// "geeksforgeeks" and "geeksfortest".
// By running the search query on contact list 
// for "ge" we get: "geeikistest" "geeksforgeeks"
// and "geeksfortest".
// By running the search query on contact list 
// for "gee" we get: "geeikistest" "geeksforgeeks"
// and "geeksfortest".
// By running the search query on contact list 
// for "geei" we get: "geeikistest".
// No results found for "geeip", so print "0". 
// No results found for "geeips", so print "0".
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function displayContacts() which takes n, contact[ ] and s as input parameters and returns a list of list of strings for required prefixes. If some prefix has no matching contact return "0" on that list.

// Expected Time Complexity: O(|s| * n * max|contact[i]|)
// Expected Auxiliary Space: O(n * max|contact[i]|)

// Constraints:
// 1 ≤ T ≤ 100, T = number of test cases
// 1 ≤ n ≤ 50
// 1 ≤ |contact[i]| ≤ 50
// 1 ≤ |s| ≤ 6 

// AmazonMicrosoftSnapdeal

// class TrieNode
// {
//     public:
//     char ch;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char data)
//     {
//         ch=data;
//         for(int i=0;i<26;i++)
//         {
//             children[i]=NULL;
//         }
//         isTerminal=false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode* root;

//     Trie()

//     {
//         root=new TrieNode('/');
//     }

//     void insertUtil(TrieNode* root,string word)
//     {
//         //base case
//         if(word.length()==0)
//         {
//             root->isTerminal=true;
//             return;
//         }

 
//         int index=word[0]-'a';
//         TrieNode* child;

//         if(root->children[index]!=NULL)
//         {
//             child=root->children[index];
//         }

//         else
//         {
//             //absent 
//             child=new TrieNode(word[0]);
//             root->children[index]=child;
//         }

//         insertUtil(child,word.substr(1));
//     }

//     void insertWord(string word)
//      { insertUtil(root, word); }



//     void printSuggestion(TrieNode* curr,vector<string> &temp,string &prefix)
//     {
//         if(curr->isTerminal)
//         {
//             temp.push_back(prefix);
           
//         }

//         for(char ch='a';ch<='z';ch++)
//         {
//             TrieNode* next=curr->children[ch-'a'];
//             if(next!=NULL)
//             {
//                 prefix.push_back(ch);
//                 printSuggestion(next,temp,prefix);
//                 prefix.pop_back();
//             }
//         }
//     }

//     vector<vector<string>> getSuggestion(string query)
//     {
//         TrieNode* prev=root;
//         vector<vector<string>> output;
//         string prefix="";

//         for(int i=0;i<query.length();i++)
//         {
//             char lastchar=query[i];
//             prefix.push_back(lastchar);
            
//             TrieNode* curr=prev->children[lastchar-'a'];

//             if(curr==NULL)
//             {  while(i<query.length())
//                 {output.push_back({"0"});
//                     i++;
//                 }
//                 break;
//             }

//             else
//             {
//                 vector<string> temp;
//                 printSuggestion(curr,temp,prefix);
//                 output.push_back(temp);
//                 prev=curr;
//             }
//         }
        
//         return output;
//     }

// };



// class Solution{
// public:
//     vector<vector<string>> displayContacts(int n, string contact[], string s)
//     {
        
        
//     Trie* t=new Trie();
//     for(int i=0;i<n;i++)
//     {
//         t->insertWord(contact[i]);
//     }

//     return t->getSuggestion(s);


//     }
// };

