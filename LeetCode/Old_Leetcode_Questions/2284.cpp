class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {

//         You have a chat log of n messages. You are given two string arrays messages and senders where messages[i] is a message sent by senders[i].

// A message is list of words that are separated by a single space with no leading or trailing spaces. The word count of a sender is the total number of words sent by the sender. Note that a sender may send more than one message.

// Return the sender with the largest word count. If there is more than one sender with the largest word count, return the one with the lexicographically largest name.

// Note:

// Uppercase letters come before lowercase letters in lexicographical order.
// "Alice" and "alice" are distinct.
        

//         Example 1:

// Input: messages = ["Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"], senders = ["Alice","userTwo","userThree","Alice"]
// Output: "Alice"
// Explanation: Alice sends a total of 2 + 3 = 5 words.
// userTwo sends a total of 2 words.
// userThree sends a total of 3 words.
// Since Alice has the largest word count, we return "Alice".





//store frequency of each word in a map
unordered_map<string,int> freq;

//add all word in single string
vector<string> all_words;
for(int i=0;i<messages.size();i++){
    stringstream ss(messages[i]);
    string word;
    while(ss>>word){
        all_words.push_back(word);
    }
}

//from sender alsop
for(int i=0;i<senders.size();i++)
{
    stringstream ss(senders[i]);
    string word;
    while(ss>>word){
       all_words.push_back(word);
    }



}


//find frequency of each word return max frequency word 
for(int i=0;i<all_words.size();i++){
    freq[all_words[i]]++;
}


//find max frequency word
int max_freq=0;
string max_word="";
for(auto it=freq.begin();it!=freq.end();it++){
    if(it->second>max_freq){
        max_freq=it->second;
        max_word=it->first;
    }
}

return max_word;
 




// for(int i=0;i<messages.size();i++)
// {
//     stringstream ss(messages[i]);
//     string word;
//     while(ss>>word)
//     {
//         freq[word]++;
//     }
// }


// //store the frequency of each word of sender in a map
// unordered_map<string,int> freq_sender;

// for(int i=0;i<senders.size();i++)
// {
//     stringstream ss(senders[i]);
//     string word;
//     while(ss>>word)
//     {
//         freq_sender[word]++;
//     }
// }

//add the frequency of each word of sender to the frequency of each word of message
//if string is same then add the frequency of sender to the frequency of message

// for(auto it=freq.begin();it!=freq.end();it++)
// {
//     if(freq_sender.find(it->first)!=freq_sender.end())
//     {
//         it->second+=freq_sender[it->first];
//     }
// }



// //find the max frequency of each word then return that word
// int max=0;
// string ans;
// for(auto it=freq.begin();it!=freq.end();it++)
// {
//     if(it->second>max)
//     {
//         max=it->second;
//         ans=it->first;
//     }
//     else if(it->second==max)
//     {
//         if(it->first>ans)
//         {
//             ans=it->first;
//         }
//     }
// }















// string res;
// int max=0;


// for(int i=0;i<messages.size();i++)
// {
//     int count=0;
//     for(int j=0;j<messages[i].size();j++)
//     {
//         if(messages[i][j]==' ')
//         {
//             count++;
//         }


//     }
//     count++;

// //res.push_back(count);

// // res=count;


//     //which lexicographically largest 


//     if(count>max )
//     {
//         max=count;
//         res=senders[i];
//     }


//     else if(count==max)
//     //compare lexicographically
   
//   //compare first letter
//     {
//         if(res[0]<senders[i][0])
//         {
//             res=senders[i];
//         }
//         else if(res[0]==senders[i][0])
//         {
//             if(res<senders[i])
//             {
//                 res=senders[i];
//             }
//         }
//     }

    
    // {
    //     if(senders[i]>res  )
    //     {
    //         res=senders[i];
    //     }

    // }

//}















    }
};