  
//   https://leetcode.com/discuss/interview-question/2322019/google-online-test-23rd-july-2022-minmum-no-of-trie-node
//https://leetcode.com/discuss/interview-question/1447833/medianet-sde-technical-interview-a-trie-question
  
  /*
  you are given four strings  A,B,C and D consisting of lower case english alphabets. 
  you are allowed to rearrange characters in each string the way you want
  After rearranging each string .you have to insert these four string into a trie such that trie requires the least number of node.
			
			Notes:
			   -> 1 root node is always required in trie
			   ->  |String length of all 4 string|<=100000
			   
		sample test case input 1
		    string A="ca"
			string B="ba"
			string C="bc"
			string D="bd"
			
	   sample output 1
	        7
			                     
								    (root)
							      /          \
	                             b             a
						      /   \         /   \
						     d      c      c     b
							 
		 another sample test case
		    input 
			  string A="ab";
			  string B="ac"
			  string C="ad"
			  string D="ae"
			
			output
			        6
			  
			  input 
			    string A=rlrliy
				string B=rrrlihipqhl
				string C=ryplihypp
				string D=lytli
			output
			    21

 */

 
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
    
 
 
 
 

    class TrieNode
    {
    public:
        TrieNode* children[26];
        bool isEnd;
        TrieNode()
        {
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isEnd=false;
        }
    };
    class Trie
    {
    public:
        TrieNode* root;
        Trie()
        {
        root=new TrieNode();
        }
        void insert(string s)
        {
        TrieNode* curr=root;
        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            if(curr->children[index]==NULL)
            {
            curr->children[index]=new TrieNode();
            }
            curr=curr->children[index];
        }
        curr->isEnd=true;
        }
        int find(string s)
        {
        TrieNode* curr=root;
        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            if(curr->children[index]==NULL)
            {
            return 0;
            }
            curr=curr->children[index];
        }
        return curr->isEnd;
        }
    };
    int findMin(string A,string B,string C,string D)
    {
        Trie* trie=new Trie();
        trie->insert(A);
        trie->insert(B);
        trie->insert(C);
        trie->insert(D);
        int count=0;
        for(int i=0;i<A.length();i++)
        {
        string s=A.substr(0,i+1);
        if(trie->find(s))
        {
            count++;
        }
        }
        for(int i=0;i<B.length();i++)
        {
        string s=B.substr(0,i+1);
        if(trie->find(s))
        {
            count++;
        }
        }
        for(int i=0;i<C.length();i++)
        {
        string s=C.substr(0,i+1);
        if(trie->find(s))
        {
            count++;
        }
        }
        for(int i=0;i<D.length();i++)
        {
        string s=D.substr(0,i+1);
        if(trie->find(s))
        {
            count++;
        }
        }
        return count;
    }
    int main()
    {
    string A="ca";
    string B="ba";
    string C="bc";
    string D="bd";
    cout<<findMin(A,B,C,D);
    return 0;
    }
// Time Complexity: O(n^2)
// Space Complexity: O(n)





/*




w = "wywy"
x = "vwzzx"
y = "xzy"
z = "zyyxw"
m=[[0 for _ in range(26)] for _ in range(4)]

for i in range(len(w)):
    m[0][ord(w[i])-ord('a')]+=1
for i in range(len(x)):
    m[1][ord(x[i])-ord('a')]+=1
for i in range(len(y)):
    m[2][ord(y[i])-ord('a')]+=1
for i in range(len(z)):
    m[3][ord(z[i])-ord('a')]+=1
def solve(p):
    global m 
    ans=0
    mod=10**9+7
    curr=-1
    valid=0
    for i in range(4):
        if p[i]:
            curr=i
            valid+=1
    if valid==1:
        #print(p)
        for i in range(26):
            ans+=m[curr][i]
        return ans
            
    for i in range(26):
        count=mod
        for j in range(4):
            if p[j]:
                count=min(m[j][i],count)
                
        if count!=mod and count!=0:
            ans+=count
            for j in range(4):
                if p[j]:m[j][i]-=count
          
    p1=[0,0,0,0]
    p2=[0,0,0,0]
    
    left=-1
    for i in range(4):
        if p[i]:
            p1[i]=1
            left=i
            break
            
          
    for i in range(4):
        if i!=left and p[i]:
            flag=1
            for c in range(26):
                if m[i][c] and m[left][c]:
                    ##print(c,i)
                    p1[i]=1
                    flag=0
                    break
                    
            if flag:p2[i]=1
                
    if p==p1:
        mask=0
        
        for i in range(4):
            if p[i]:mask+=1<<i
                
                
        best=sys.maxsize
        s=mask
        mtemp=copy.deepcopy(m) 
        
        while s>0:
            if s!=mask:
                p1=[0,0,0,0]
                p2=[0,0,0,0]
                
                other=mask^s
                for i in range(4):
                    if (s>>i & 1)==1:p1[i]=1
                    elif (other>>i & 1)==1:p2[i]=1
                
                     
                m=copy.deepcopy(mtemp)
                temp=solve(p1)+solve(p2)
                best=min(temp,best)
                
            
            s=(s-1)&mask
        
        ans+=best
        return ans
          
    ans+=solve(p1)+solve(p2)
    return ans
print(solve([1,1,1,1]))  