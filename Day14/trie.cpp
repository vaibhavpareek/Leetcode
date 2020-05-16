#include <bits/stdc++.h>
using namespace std;
class TrieNode {
public:
    TrieNode* child[26] = { NULL };
    bool isEndOfWord;
    
    TrieNode()
    {
        isEndOfWord = false;
    }
};

class Trie {
    private:
    TrieNode* root;
    public:
    /** Initialize your data structure here. */
    Trie() {      
       root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* pcrawl = root;
        for(int i=0;i<word.length();i++)
        {
            int index = word[i]-'a';    
            if(!pcrawl->child[index])
                pcrawl->child[index]=new TrieNode();
            pcrawl = pcrawl->child[index];
        }
       pcrawl->isEndOfWord=true; 
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* pcrawl = root;
      for(int i=0;i<word.length();i++)
    {
          int index=word[i]-1;
          if(!pcrawl->child[index])
              return false;
          pcrawl=pcrawl->child[index]; 
      }
        if(pcrawl!=NULL && pcrawl->isEndOfWord)
            return true;
        else
            return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         TrieNode* pcrawl = root;
      for(int i=0;i<prefix.length();i++)
      {
          int index=prefix[i]-1;
          if(!pcrawl->child[index])
              return false;
          pcrawl=pcrawl->child[index]; 
      }
        if(pcrawl!=NULL)
            return true;
        else
            return false;
        
        
    }
};
int main()
{
  Trie* obj = new Trie();
  obj->insert("these");
  cout<<obj->search("these");
  cout<<obj->startsWith("the"); 
}
/**
 * Your Trie object will be instantiated and called as such:
 
 */