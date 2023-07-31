// https://leetcode.com/discuss/interview-question/2340720/Sprinklr-or-OA-or-July-2022

// Search Engine

// Prof. Arnab Bhattacharya has asked you to implement a basic search engine which gives you term frequencies 
//for his course Information Retrieval. This search engine will have these functionalities

// 1. Index Le store a given term & it's frequency

// 2. Prefix query Le frequency of terms with given prefix (upto this point)

// 3. Update Le, update frequency of given term

// Input: First line: Integer n denoting number of operations. Next in lines containing space seperated operation, 
//string (say op, s. f) & integer only if it's index/update operation Where op, = 'Q' denotes prefix query, op, == T (capital i) 
//denotes index operation, op == 'U' denotes update operation, a is string to be queried or indexed & f, is frequency of terms (present only if op,==" or

// op=='U')

// Output: Term frequency for every prefix query in newline.

// Constraints: 0 10 s, contains only English lowercase letters 10 > >1 Length of s, ≤ 30

// Sample input ▷

// Sample output

// 12

// I google 1

// I spring 2

// Qapple

// Explanation

// 1. Frequency for apple is 2 2. spr prefix comes in 2 terms: sprinktr & spring, so frequency of prefix=10+2=12





#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>



struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    TrieNode() {
        fr(i,26) children[i]=NULL;
        isEnd=false;
    }
};

void insert(TrieNode* root, string s) {
    TrieNode* curr=root;
    fr(i,s.size()) {
        if(curr->children[s[i]-'a']==NULL) curr->children[s[i]-'a']=new TrieNode();
        curr=curr->children[s[i]-'a'];
    }
    curr->isEnd=true;
}

void search(TrieNode* root, string s, int& ans) {
    TrieNode* curr=root;
    fr(i,s.size()) {
        if(curr->children[s[i]-'a']==NULL) return;
        curr=curr->children[s[i]-'a'];
    }
    ans+=curr->isEnd;
}

//search for prefix
void searchPrefix(TrieNode* root, string s, int& ans) {
    TrieNode* curr=root;
    fr(i,s.size()) {
        if(curr->children[s[i]-'a']==NULL) return;
        curr=curr->children[s[i]-'a'];
    }
    ans+=curr->isEnd;
    fr(i,26) {
        if(curr->children[i]!=NULL) searchPrefix(curr->children[i],s,ans);
    }
}

void update(TrieNode* root, string s, int f) {
    TrieNode* curr=root;
    fr(i,s.size()) {
        if(curr->children[s[i]-'a']==NULL) curr->children[s[i]-'a']=new TrieNode();
        curr=curr->children[s[i]-'a'];
    }
    curr->isEnd=true;
}




int main(){

    int n;
    cin>>n;
    char c;
    string s;
    int f;
    TrieNode* root=new TrieNode();
    while(n--){
        cin>>c>>s>>f;
        
        if(c=='Q'){
            int ans=0;
            searchPrefix(root,s,ans);
            cout<<ans<<endl;
        }
        else if(c=='I'){
            insert(root,s);
        }
        else if(c=='U'){
            update(root,s,f);
        }
        
       
    }


    return 0;
}


