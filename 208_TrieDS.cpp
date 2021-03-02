class TrieNode {
    public : 
    bool isWord;
    TrieNode* children[26];
    
    TrieNode()
    {
        isWord = false;
        for (int i=0;i<26;i++)
            children[i] = nullptr;
    }
    
};

class Trie {
    TrieNode *root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int len = word.size();
        int k;
        TrieNode* cur = root;
        for (int i=0;i<len;i++)
        {
            k = word[i]-'a';
            if (cur->children[k]==nullptr)
                cur->children[k] = new TrieNode();
            cur = cur->children[k];
        }
        cur->isWord=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int len=word.size();
        TrieNode* cur = root;
        int k;
        for (int i=0;i<len;i++)
        {
            k = word[i]-'a';
            if (cur->children[k]==nullptr)
                return false;
            cur = cur->children[k];
        }
        if (cur->isWord==false)
            return false;
        return true;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        int len=prefix.size();
        TrieNode* cur = root;
        int k;
        for (int i=0;i<len;i++)
        {
            k=prefix[i]-'a';
            if (cur->children[k]==nullptr)
                return false;
            cur = cur->children[k];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */