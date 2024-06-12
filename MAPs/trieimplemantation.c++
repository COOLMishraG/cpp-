#include<iostream>
#include<unordered_map>
using namespace std;
class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0 ; i<26 ; i++){
            children[i]=NULL;
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
    void insertUtil(TrieNode* root , string word){
        if (word.length()==0){
            root->isTerminal= true;
            return ;
        }
        int index = word[0]-'a';
        TrieNode* child;
        if(root-> children[index] != NULL){
            child =root->children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root->children[index]  = child;
        }
        insertUtil(child , word.substr(1));
    }
    void insertWord(string Word){
        insertUtil(root , Word);
    }
    bool searchUtil(TrieNode* root , string word){
         if (word.length()==0){
            return root->isTerminal;
        }
        int index = word[0]-'a';
        TrieNode* child;
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else {
            return false;
        }
        return searchUtil(child , word.substr(1));
    }

    bool searchword(string word){
        return  searchUtil(root , word);
    }
    void RemoveUtil(TrieNode* root , string word){
        if (word.length()==0){
            root->isTerminal=false;
            return ;
        }
        int index = word[0]-'a';
        TrieNode* child;
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else {
            return ;
        }
        RemoveUtil(child , word.substr(1));
    }
    
    void RemoveWord(string Word){
        RemoveUtil(root , Word);
    }
};
int main(){
    Trie *t = new Trie();
    t->insertWord("anuj");
    t->insertWord("nuj");
    t->RemoveWord("anuj");
    cout<<"present or not  " << t->searchword("anuj");
    return 0;
}