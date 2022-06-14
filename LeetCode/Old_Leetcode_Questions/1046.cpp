class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {



priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        int m1,m2;
        while(!pq.empty())
        {
            if(pq.size()==1)
                return pq.top();
            m1=pq.top();
            pq.pop();
            m2=pq.top();
            pq.pop();
            
            if(m1!=m2)
                pq.push(m1-m2);
        }
            return 0;

        //return all the elements in the priority queue
    //     vector<int> v;
    //     while(!pq.empty())
    //     {
    //         v.push_back(pq.top());
    //         pq.pop();
    //     }
    //   //return v
    //   return v;




    // return pq.top();


        //sort the stones in descending order
        // sort(stones.begin(), stones.end(), greater<int>());

        // vector<int> new_stones;


        // //if stone[i] == stone[i+1] then we can remove both of them
        // //if stone[i] != stone[i+1] then stone[i] - stone[i+1] is the new stone isnpush in vector
        // for (int i = 0; i < stones.size() - 1; i++) {
        //     if (stones[i] == stones[i + 1]) {
        //         i++;
        //     }
        //     else {
        //         new_stones.push_back(stones[i] - stones[i + 1]);
        //     }
        // }

        // //sort the new_stones in descending order
        // sort(new_stones.begin(), new_stones.end(), greater<int>());

        // vector<int> new_new_stones;

        // //if new_stones[i] != new_stones[i+1]  then push in new_new_stones

        // for (int i = 0; i < new_stones.size() - 1; i++) {
        //     if (new_stones[i] == new_stones[i + 1]) {
        //         i++;
        //     }
        //     else {
        //         new_new_stones.push_back(new_stones[i]);
        //     }
        // }

        // //if new_new_stones is empty then return 0
        // if (new_new_stones.empty()) {
        //     return 0;
        // }
        // else {
        //  //return all element of new_new_stones vector
        //     return accumulate(new_new_stones.begin(), new_new_stones.end(), 0);
        // }



    




        
    }
};