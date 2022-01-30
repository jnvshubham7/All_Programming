class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {


        // //using the idea of Trie
        // //the idea is to use the trie to store the prefixes of the numbers
        // //and then use the trie to find the maximum XOR


        // //used trie method
        // int max_xor=0;
        // TrieNode* root=new TrieNode();
        // for(int i=0;i<nums.size();i++){
        //     TrieNode* cur=root;
        //     int num=nums[i];
        //     for(int j=31;j>=0;j--){
        //         int bit=num>>j&1;
        //         if(cur->child[bit]==NULL){
        //             cur->child[bit]=new TrieNode();
        //         }
        //         cur=cur->child[bit];
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     TrieNode* cur=root;
        //     int num=nums[i];
        //     int xor=0;
        //     for(int j=31;j>=0;j--){
        //         int bit=num>>j&1;
        //         if(cur->child[bit^1]!=NULL){
        //             xor+=1<<j;
        //             cur=cur->child[bit^1];
        //         }
        //         else{
        //             cur=cur->child[bit];
        //         }
        //     }
        //     max_xor=max(max_xor,xor);
        // }
        // return max_xor;

        




























// set<int> set1;
//         set<int> set2;
//         for(int i=0;i<nums.size();i++){
//            set1.insert(nums[i]);
//         }
//         for(int i=1;i<nums.size()-1;i++){
//            set2.insert(nums[i]);
//         }

//         int max = 0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 int xor = nums[i]^nums[j];
//                 if(set1.find(xor)!=set1.end() && set2.find(xor)!=set2.end()){
//                     max = max>xor?max:xor;
//                 }
//             }
//         }
//         return max;





























        //create two sets ane have store i in set1 and j=i+1 in set2
        //j=i+1
        //if(set1.find(j)!=set1.end()){
        //    return i^j;
        //}






        
       


        // set<int> set1;
        // set<int> set2;
        // for(int i=0;i<nums.size();i++){
        //    set1.insert(nums[i]);
        // }
        // for(int j=i+1;i<nums.size();j++){
        //    set2.insert(nums[j]);
        // }

        // //find the maximum XOR
        // int max=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(set1.find(nums[i]^nums[j])!=set1.end() && set2.find(nums[i]^nums[j])!=set2.end()){
        //             max=max>nums[i]^nums[j]?max:nums[i]^nums[j];
        //         }
        //     }
        // }
        // return max;
        // int max=0;
        // for(int i=0;i<nums.size();i++){
        //    if(set1.find(nums[i])!=set1.end() && set2.find(nums[i]+1)!=set2.end()){
        //        max=max>nums[i]^nums[i]+1?max:nums[i]^nums[i]+1;
        //    }
        // }
        // return max;




        //create two i and j or check two number of maximum xor and store in vector 
        //sort the vector
        //return the vector[0]

    //     int max=0;
    //     int i=0;
    //     int j=0;
    //     vector<int> v;
    //     for(i=0;i<nums.size();i++){
    //         for(j=i+1;j<nums.size();j++){
    //             v.push_back(nums[i]^nums[j]);
    //         }
    //     }
    //     sort(v.begin(),v.end());

    //     for(i=0;i<v.size();i++){
    //         if(v[i]>max){
    //             max=v[i];
    //         }
    //     }
    //     return max;
        
 }
};