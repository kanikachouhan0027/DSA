// class TrieNode
// {
//     public:
//     char ch;
//     TrieNode* children[26];
//     bool isTerminal;
//     int childCount;

//     TrieNode(char data)
//     {
//         ch=data;
//         for(int i=0;i<26;i++)
//         {
//             children[i]=NULL;
//         }
//         childCount=0;
//         isTerminal=false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode* root;

//     Trie(char ch)

//     {
//         root=new TrieNode(ch);
//     }

//     void insertUtil(TrieNode* root,string word)
//     {
//         //base case
//         if(word.length()==0)
//         {
//             root->isTerminal=true;
//             return;
//         }

//         //Assuming all char to be in CAPS
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
//             root->childCount++;
//             root->children[index]=child;
//         }

//         insertUtil(child,word.substr(1));
//     }  

//     void insertWord(string word)
//     {
//         insertUtil(root,word);
//     }
    
//     void lcp(string word,string &ans)
//     {
     
//         for(int i=0;i<word.length();i++)
//         {
//             char ch=word[i];
            
//             if(root->childCount==1)
//             {
//                 ans.push_back(ch);
//                 int index=ch-'a';
//                 root=root->children[index];
//             }
                  
//             else
//             {
//                 break;
//             }
//             if(root->isTerminal)
//             {break;}
//         }
        
//     }
// };


// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
        
//        Trie* t=new Trie('\0');
        
//         for(int i=0;i<strs.size();i++)
//         {
//             t->insertWord(strs[i]);
//         }
        
//         string ans="";
//         string word=strs[0];
        
//         t->lcp(word,ans);
//         return ans;
//     }
// };
