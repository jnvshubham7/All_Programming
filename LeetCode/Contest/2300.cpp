class Solution {
public:

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//         You are given two positive integer arrays spells and potions, of length n and m respectively, where spells[i] represents the strength of the ith spell and potions[j] represents the strength of the jth potion.

// You are also given an integer success. A spell and potion pair is considered successful if the product of their strengths is at least success.

// Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful pair with the ith spell.
        

        int n=spells.size();
        int m=potions.size();
        vector<int> pairs(n,0);
        // sort(spells.begin(),spells.end());
        // sort(potions.begin(),potions.end());
        int i=0,j=0;
        // while(i<n && j<m)
        // {
        //     if(spells[i]*potions[j]>=success)
        //     {
        //         pairs[i]++;
        //         j++;
        //     }
        //     else
        //     {
        //         i++; 
        //     }
        // }
        // return pairs;

vector<int> v;

unordered_map<int,int> mp;

//take one spell at one time then multiply with all potions and check if it is greater than success


//use only one loop to check all potions
//use only one loop to solve this problem

// unordered_map<pair<int,int>,int> mp;

// for(int i=0;i<n;i++)
// {
//     mp[make_pair(spells[i],0)]++;
// }

// for(int i=0;i<m;i++)
// {
//    mp[make_pair(0,potions[i])]++;
// }




//make pair of spell and potion 

// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(spells[i]*potions[j]>=success)
//         {
//             mp[{i,j}]++;
//         }
//     }
// }

for(int i=0;i<n;i++)
{
    int curr_spell=spells[i];
    int curr_potions=0;
    for(int j=0;j<m;j++)
    {
        if(curr_spell*potions[j]>=success)
        {
            curr_potions++;
        }
    }
    v.push_back(curr_potions);

}
return v;
    
    // if(mp.find(curr_spell)==mp.end())


        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(spells[i]*potions[j]>=success)
        //         {
        //             v.push_back(potions[j]);
        //         }
        //     }
        //     mp[v]=1;
        //     v.clear();
        // }
        // for(auto it=mp.begin();it!=mp.end();it++)
        // {
        //     for(int i=0;i<it->first.size();i++)
        //     {
        //         pairs[i]+=it->second;
        //     }
        // }
        //return pairs;

       


// vector<int,vector<int>> vv;

// while(i<n && j<m)
// {
//    vv.push_back(make_pair(spells[i],potions[j]));
//     i++;
//     j++;

// }


        // for (int i = 0; i < spells.size(); i++) {
        //     v1.push_back(spells[i] * potions[i]);
        // }

        // sort(v1.begin(), v1.end());


        // for (int i = 0; i < v1.size(); i++) {
        //     if (v1[i] >= success) {
        //         v.push_back(i + 1);
        //     }
        // }

        // return v1;








    }
};