/*
 * @lc app=leetcode id=2349 lang=cpp
 *
 * [2349] Design a Number Container System
 */

// @lc code=start
class NumberContainers {
public:
   
    
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
    
    
    
    
    
    //unordered_map<int,int> m;
    map<int ,int> m;
    NumberContainers() {

        //initialize the map
      
        

        

        
    }
    
    void change(int index, int number) {

        m[index] = number;


        //if number is already in map, replace it
        //else insert it

        // if(m.find(index)==m.end()) {
        //     m[index]=number;
        // }
        // else {
        //     m[index]=number;
        // }

        

        
    }
    
    int find(int number) {

        for(auto it: m)
        {
            if(it.second==number)
            {
                return it.first;
            }
        }

        return -1;



       //find smallest index for the given number

    //     int ans=INT_MAX;
    //     for(auto it=m.begin();it!=m.end();it++) {
    //         if(it->second==number) {
    //             ans = min(ans,it->first);
    //         }
    //     }
    //    if(ans==INT_MAX) {
    //        return -1;
    //    }
    //    else {
    //        return ans;
    //    }
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
// @lc code=end

