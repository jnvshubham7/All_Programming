class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        priority_queue<pair<int,int>> pq;                  // this is our heap
        unordered_map<int,int> mp;                         // hash map to store the frequency of an element             
        int ctr=1;
        for(int i=0;i<nums.size();i++){                    // binds the frequency to its respective element       
            mp[nums[i]]++;
        }       
        for(auto &it: mp){                           // stores the key value pair to heap such that it sorted by the value ie frequency
            pq.push(make_pair(it.second,it.first));
        }
        while((ctr<=k)){
            result.push_back(pq.top().second);
            pq.pop();
            ctr++;
        }
        return result;

        //store in vector of pair<int,int> with first being the number and second being the frequency
        // vector<pair<int,int>> numFreq;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int num=nums[i];
        //     int freq=1;
        //     for(int j=0;j<numFreq.size();j++)
        //     {
        //         if(numFreq[j].first==num)
        //         {
        //             freq=numFreq[j].second+1;
        //             numFreq.erase(numFreq.begin()+j);
        //             break;
        //         }
        //     }
        //     numFreq.push_back(make_pair(num,freq));
        // }

        // //sort the vector based on the frequency
        // sort(numFreq.begin(),numFreq.end(),[](pair<int,int> a,pair<int,int> b){return a.second>b.second;});

        // //store the top k numbers in a vector
        // vector<int> topK;
        // for(int i=0;i<k;i++)
        // {
        //     topK.push_back(numFreq[i].first);
        // }

        // return topK;

//   unordered_map<int, int> freq;
//         for (int num : nums) {
//             freq[num]++;
//         }


// //sort map with second element
//         vector<pair<int, int>> vec;
//         for (auto& p : freq) {
//             vec.push_back(make_pair(p.first, p.second));
//         }
//         sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//             return a.second > b.second;
//         });

//         vector<int> res;
//         for (int i = 0; i < k; ++i) {
//             res.push_back(vec[i].first);
//         }
//         return res;

















        //use unordered_map to store the frequency of each number

        //store the frequency of each number in a using priority_queue
        //use a vector to store the top k frequent numbers


        // unordered_map<int, int> freq;
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // vector<int> res;

        // for (int i = 0; i < nums.size(); i++) {
        //     freq[nums[i]]++;
        // }

        // for (auto it = freq.begin(); it != freq.end(); it++) {
        //     pq.push(make_pair(it->second, it->first));
        // }

        // for (int i = 0; i < k; i++) {
        //     res.push_back(pq.top().second);
        //     pq.pop();
        // }

        // return res;


        // unordered_map<int, int> freq;
        // for (int num : nums) {
        //     freq[num]++;
        // }
        //sort the freq map by frequency
        //sort unordered_map by most frequent first




       //return k number with the highest frequency
        // vector<int> res;
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // for (auto& p : freq) {
        //     pq.push(p);
        // }
        // for (int i = 0; i < k; i++) {
        //     res.push_back(pq.top().first);
        //     pq.pop();
        // }
        // return res;

        
    }
};