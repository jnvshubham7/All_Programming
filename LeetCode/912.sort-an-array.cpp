/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */

// @lc code=start
class Solution {
public:


void insert(vector<int>& v,int temp){

    if(v.size()==0 || v[v.size()-1]<temp){
        v.push_back(temp);
        return;
    }

    else {

        int val=v[v.size()-1];
        v.pop_back();
        insert(v,temp);
        v.push_back(val);

    }
    
}


vector<int> sort_vector(vector<int>& v){
    int n=v.size();

    if(n==1)
    return v;

    int temp=v[n-1];
    v.pop_back();
    sort_vector(v);
    insert(v,temp);
    return v;
}
   

  
    vector<int> sortArray(vector<int>& v) {

        return sort_vector(v);
        
    }

   
};
// @lc code=end

