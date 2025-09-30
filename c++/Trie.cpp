#include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root, string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        // absent
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        //Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        //base
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        TrieNode* child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool search(string word){
        return searchUtil(root, word);
    }

    void removeUtil(TreeNode* root, string word){
        
    }
    void remove(string word){
        removeUtil(root, word);
    }
};
int main(){
    Trie *t = new Trie();

    t->insertWord("abcd");

    cout<<"Present or Not "<< t->search("abcd")<<endl;
return 0;
}