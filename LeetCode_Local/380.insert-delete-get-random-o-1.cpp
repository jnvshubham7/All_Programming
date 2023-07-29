/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
public:

    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {

        if(s.find(val) == s.end())
        {
            s.insert(val);
            return true;
        }
        return false;
        
    }
    
    bool remove(int val) {

        if(s.find(val) != s.end())
        {
            s.erase(val);
            return true;
        }
        return false;
        
    }
    
    int getRandom() {

        int n= s.size();

       for(auto it: s)
         {
                if(rand() % n == 0)
                    return it;
                n--;


         }

        return -1;

        // int n = s.size();
        // int r = rand() % n;
        // auto it = s.begin();
        // advance(it, r);
        // return *it;
       
          
       

        

    }


};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

