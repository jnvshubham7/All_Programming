class Solution {
public:

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}



    vector<string> removeAnagrams(vector<string>& words) {

        //compare every word with every other word if they are anagrams then delete one of them
        //if they are not anagrams then keep them in the vector
        //return the vector

        //check if word is anagram of another word
        //if it is then delete the word
        //if it is not then keep it in the vector

        int n=words.size();

        //when comparing words, only compare i,i+1 
        //not whool vector
        //means only adjacent words are compared
        //if they are anagrams then delete one of them
        //if they are not anagrams then keep them in the vector

        // select any index i such that 0 < i < words.length and words[i - 1] and words[i] are anagrams, 
        // and delete words[i] from words


        //compare words[i] with words[i+1] if they are anagrams then delete words[i+1] 
        //then i++
        //if they are not anagrams then keep them in the vector
        //then i++

        //only compare i,i+1 not whole vector

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {

                if(isAnagram(words[i],words[j]) && (j-i==1))
                {
                    words.erase(words.begin()+j);
                  
                    j--;
                    n--;
                     // break;
                }
                else {
                    break;
                }
            }
        }

        // for(int i = 0; i < n; i++)  
        // {  
        //     int j=i+1; 
        //     {  
        //         if(isAnagram(words[i], words[j]))  
        //         {  
        //             words.erase(words.begin()+j);  
        //             j--;  
        //             n--;  
        //         }  
        //     }  
        // }





        // for(int i=0;i<n;i++)
        // {
            
        //         if(isAnagram(words[i],words[i+1]))
        //         {
        //             words.erase(words.begin()+i);
        //             i--;
        //             n--;
                
        //     }
        // }

        // return words;


        //only adjacent words are anagrams then delete one of them
        //if they are not adjacent then keep them in the vector

        

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(isAnagram(words[i],words[j]))
        //         {

        //              //if they are adjacent then delete one of them
        //             //if they are not adjacent then keep them in the vector
        //             if(i==j-1)
        //             {
        //                 words.erase(words.begin()+j);
        //                 n--;
        //                 j--;
        //             }
        //             else
        //             {
        //                 words.erase(words.begin()+i);
        //                 n--;
        //                 i--;
        //                 break;
        //             }
        //             // words.erase(words.begin()+j);
        //             // j--;
        //             // n--;

        //             //if they are adjacent then delete one of them
        //             //if they are not adjacent then keep them in the vector

        //         }
        //     }
        // }

        return words;
        // vector<string> ans;
        // for(int i=0;i<n;i++)
        // {
        //     bool flag=true;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i!=j)
        //         {
        //             if(isAnagram(words[i],words[j]))
        //             {
        //                 flag=false;
        //                 break;
        //             }
        //         }
        //     }
        //     if(flag)
        //     {
        //         ans.push_back(words[i]);
        //     }
        // }
        // return ans;



    

        //sort the words
        // sort(words.begin(), words.end());

        // //remove duplicates
        // words.erase(unique(words.begin(), words.end()), words.end());

        // //return words
        // return words;
        
    }
};