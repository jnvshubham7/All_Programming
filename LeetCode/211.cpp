class WordDictionary {
public:
    WordDictionary() {

        //create a vector of worddict



        vector<string> worddict;


        //wordictionary is store all word in vector
       

        
    }
    
    void addWord(string word) {

        //add word to vector
        worddict.push_back(word);

        //add word in wordDictinary
        //
        // if(wordDictinary.find(word)==wordDictinary.end()){
        //     wordDictinary[word]=true;
        // }

        
    }
    
    bool search(string word) {
        //search word in vector
        if(worddict.find(word)!=worddict.end()){
            return true;
        }
        else{
            return false;
        }

        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */