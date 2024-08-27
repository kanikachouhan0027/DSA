#include<iostream>
using namespace std;

class TrieNode
{
    public:
    char ch;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char data)
    {
        ch=data;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie
{
public:
    TrieNode* root;

    Trie()

    {
        root=new TrieNode('/');
    }

    void insertUtil(TrieNode* root,string word)
    {
        //base case
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }

        //Assuming all char to be in CAPS
        int index=word[0]-'A';
        TrieNode* child;

        if(root->children[index]!=NULL)
        {
            child=root->children[index];
            return;
        }

        else
        {
            //absent 
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        insertUtil(child,word.substr(1));
    }  

    void insertWord(string word)
    {
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word)
    {
        //base case
        if(word.length()==0)
        {
            return root->isTerminal;
        }
        int index=word[0]-'A';
        TrieNode* child;

        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else{
            return false;
        }

        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word)
    {
       return searchUtil(root,word);
    }
  
};
int main()
{
    Trie* Dict=new Trie();
    Dict->insertWord("KANIKA");
    Dict->insertWord("DSA");
    Dict->insertWord("WEBD");
    Dict->insertWord("ML");

    cout<<Dict->searchWord("KANIKA");
    cout<<Dict->searchWord("ML");
    cout<<Dict->searchWord("KANIK");


}