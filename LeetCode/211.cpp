


class WordDictionary {
public:
    map<int, vector<string>> dict; 
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        dict[word.size()].push_back(word);
    }
    
    bool search(string word) {
        if(dict[word.size()].size()==0)
        {
            return false;
        }
        for(string s: dict[word.size()])
        {
            if(s==word)
            {
                return true;
            }
            int l=0;
            for(int i=0; i<word.size(); i++)
            {
                if(word[i]=='.')
                {
                    l++;
                    continue;
                }
                if(word[i]!=s[i])
                {
                    break;
                }
                l++;
            }
            if(l==word.size())
            {
                return true;
            }
        }
        return false;
    }
};












// class WordDictionary {
// public:
//     WordDictionary() {}
    
//     void addWord(string word) {
//         words[word.size()].push_back(word);
//     }
    
//     bool search(string word) {
//         for(auto s: words[word.size()]) if(isEqual(s, word)) return true;
//         return false;
//     }
    
// //private:
//     unordered_map<int, vector<string>>words;
    
//     bool isEqual(string a, string b){
//         for(int i = 0; i < a.size(); i++){
//             if(b[i] == '.') continue;
//             if(a[i] != b[i]) return false;
//         }
//         return true;
//     }
// };



































// class WordDictionary {
// public:
//     WordDictionary() {

//         //create a vector of worddict



//         vector<string> worddict;


//         //wordictionary is store all word in vector
       

        
//     }
    
//     void addWord(string word) {

//         //add word in hashmap and its size as key
        

//         // //add word to vector
//         // worddict.push_back(word);

//         //add word in wordDictinary
//         //
//         // if(wordDictinary.find(word)==wordDictinary.end()){
//         //     wordDictinary[word]=true;
//         // }

        
//     }
    
//     bool search(string word) {
//         //search word in vector
//         if(worddict.find(word)!=worddict.end()){
//             return true;
//         }
//         else{
//             return false;
//         }

        
//     }
// };

// /**
//  * Your WordDictionary object will be instantiated and called as such:
//  * WordDictionary* obj = new WordDictionary();
//  * obj->addWord(word);
//  * bool param_2 = obj->search(word);
//  */





























// class WordDictionary {
// public:
//     WordDictionary() {

//         //create a vector of worddict



//         vector<string> worddict;


//         //wordictionary is store all word in vector
       

        
//     }
    
//     void addWord(string word) {

//         //add word in hashmap and its size as key
        

//         // //add word to vector
//         // worddict.push_back(word);

//         //add word in wordDictinary
//         //
//         // if(wordDictinary.find(word)==wordDictinary.end()){
//         //     wordDictinary[word]=true;
//         // }

        
//     }
    
//     bool search(string word) {
//         //search word in vector
//         if(worddict.find(word)!=worddict.end()){
//             return true;
//         }
//         else{
//             return false;
//         }

        
//     }
// };

// /**
//  * Your WordDictionary object will be instantiated and called as such:
//  * WordDictionary* obj = new WordDictionary();
//  * obj->addWord(word);
//  * bool param_2 = obj->search(word);
//  */