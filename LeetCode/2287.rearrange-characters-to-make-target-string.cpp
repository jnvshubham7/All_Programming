/*
 * @lc app=leetcode id=2287 lang=cpp
 *
 * [2287] Rearrange Characters to Make Target String
 */

// @lc code=start
class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        
        //Rearrange Characters to Make Target String

//         You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

// Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.

 

// Example 1:

// Input: s = "ilovecodingonleetcode", target = "code"
// Output: 2
// Explanation:
// For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
// For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
// The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
// We can make at most two copies of "code", so we return 2.




//find how many target word can be formed from s
//find the max number of target word can be formed


         int n=s.length();
    int m=target.length();
    int cnt=0;

int flag=0;
    
vector<char> v;
for(int i=0;i<n;i++)
{
    v.push_back(s[i]);
}

//print vector
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;


//find frequency of each char in vector in unordered_map
unordered_map<char,int> freq;

for(int i=0;i<n;i++)
{
    freq[v[i]]++;
}

//print unordered_map

// for(auto it : freq)
// {
//     cout<<it.first<<" "<<it.second<<endl;
// }


vector<char> v2;
for(int i=0;i<m;i++)
{
    v2.push_back(target[i]);
}


unordered_map<char,int> freq2;


for(int i=0;i<m;i++)
{
    freq2[v2[i]]++;
}

int flag3=0;
for(auto it : freq2)
{
   //if all freq more than 2 
    if(it.second>=2)
    {
         flag3=1;

    }
}

//if size of freq2 is 1
if(freq2.size()==1)
{
    flag=1;
}



// //print unordered_map
// for(auto it : freq2)
// {
//     cout<<it.first<<" "<<it.second<<endl;
// }





vector<int> ans;

//match v2 ech element in freq.first then push freq.second in ans
for(auto it=freq.begin();it!=freq.end();it++)
{
    for(int i=0;i<m;i++)
    {
        if(it->first==v2[i])
        {
            ans.push_back(it->second);
        }
    }
    // ans.push_back(cnt);
    // cnt=0;
}


int flag2=0;

//freq2.second == ans then flag2=1
for(int i=0;i<ans.size();i++)
{
    if(freq2[v2[i]]==ans[i])
    {
        flag2=1;
        break;
       // cout<<"YES"<<endl;
    }
    else
    {
        flag2=0;
        break;

       // cout<<"NO"<<endl;
    }
}



//print ans
// for(int i=0;i<ans.size();i++)
// {
//     cout<<ans[i]<<" ";
// }

// cout<<endl;





//check each char in freq2 is in freq

// for(auto it=freq2.begin();it!=freq2.end();it++)
// {
//     if(freq.find(it->first)!=freq.end())
//     {

        
//         // if(freq[it->first]>=it->second)
//         // {
//         //     cnt+=it->second;
//         // }
//         // else
//         // {
//         //     cnt+=freq[it->first];
//         // }
//     }

//     ans.push_back(cnt);
//     cnt=0;
// }




//find min element in ans


if(m==n && s==target)
{
    return m;
}
else if(m>=n)
{
    return 0;
}
else if(flag==1)
{
    if(flag2==1)
    {
      return 1;
    }

    else {
        return 0;
    }
}
else {



int min=INT_MAX;
for(int i=0;i<ans.size();i++)
{
    if(ans[i]<min)
    {
        min=ans[i];
    }
}

if(flag3==1)
{
    return min/2;
}
else {
return min;
}





}











        
    }
};
// @lc code=end

