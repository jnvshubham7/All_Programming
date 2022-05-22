class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
//         You have n bags numbered from 0 to n - 1. You are given two 0-indexed integer arrays capacity and rocks. 
//The ith bag can hold a maximum of capacity[i] rocks and currently contains rocks[i] rocks. You are also given an integer additionalRocks, 
//the number of additional rocks you can place in any of the bags.

// Return the maximum number of bags that could have full capacity after placing the additional rocks in some bags

vector<int> v;

int flag = 0;

        for (int i = 0; i < capacity.size(); i++) {
            v.push_back(capacity[i] - rocks[i]);
        }

        sort(v.begin(), v.end());

        int count = 0;



        for (int i = 0; i < v.size(); i++) {
           
                
                additionalRocks -= v[i];
                 

 count++;

 if(additionalRocks < 0) 

     {
         flag = 1;
     }


                if (additionalRocks == 0 || additionalRocks < 0) {
                    break;
                }
               

                // if(additionalRocks == 0) {
                //     flag = true;
                //   //  count++;
                //    // break;
                // }




               // if(v[])

               
            
        }

        if(flag == 1) {
          return count-1;
        }

        else {
            return count;
        }



        //sort rocks and capacity
        // sort(rocks.begin(), rocks.end());
        // sort(capacity.begin(), capacity.end());
        
        // //calculate the number of bags that can hold the additional rocks
        // int numBags = 0;
        // for (int i = 0; i < rocks.size(); i++) {
        //     if (rocks[i] + additionalRocks <= capacity[i]) {
        //         numBags++;
        //     }
        // }
        
        // return numBags;
    }
};