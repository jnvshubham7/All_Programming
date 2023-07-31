/*
 * @lc app=leetcode id=2332 lang=cpp
 *
 * [2332] The Latest Time to Catch a Bus
 */

// @lc code=start
class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {

        // return solve(buses, passengers, capacity);


     sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        int i = 0, j = 0;
        int ans = 0;
        while (i < buses.size() && j < passengers.size()) {
            if (passengers[i]<=buses[j]) {
                if (capacity > 0) {
                    capacity--;
                    ans = max(ans, passengers[j]);
                }
                j++;
            } else {
                i++;
            }
        }
        return ans;
    


        // sort(buses.begin(), buses.end());
        // sort(passengers.begin(), passengers.end());

        // int bustime = 0;
        // int passengertime = 0;

        // for(int i = 0; i < buses.size(); i++)
        // {
        //    bustime = buses[i];

        //    while(capacity!=0)
        //    {
        //         if(passengers.size()==0)
        //         {
        //              return bustime;
        //         }

        //         if(passengers[0]<=bustime)
        //         {
        //             capacity--;
                   
        //             passengers.erase(passengers.begin());

                    
        //         }
                
               
        //         else
        //         {
        //             break;
        //         }
               


        //         // else if(passengers[0]>bustime)
        //         // {
        //         //     capacity--;
        //         //     passengers.erase(passengers.begin());
        //         // }
        //         // else
        //         // {
        //         //     passengers.erase(passengers.begin());
        //         // }
        //    }

        //    buses.erase(buses.begin());

        //    if(buses.size()==1)
        //    {

        //    }



             






        
        






        // int i = 0, j = 0;
        // int ans = 0;
        // while (i < buses.size() && j < passengers.size()) {
        //     if (passengers[i]<=buses[j]) {
        //         if (capacity > 0) {
        //             capacity--;
        //             ans = max(ans, passengers[j]);
        //         }
        //         j++;
        //     } else {
        //         i++;
        //     }
        // }
        // return ans;






        
   // }

    // int solve(vector<int>& buses, vector<int>& passengers, int capacity) {
    //     sort(buses.begin(), buses.end());
    //     sort(passengers.begin(), passengers.end());
    //     int i = 0, j = 0;
    //     int ans = 0;
    //     while (i < buses.size() && j < passengers.size()) {
    //         if (passengers[i]<=buses[j]) {
    //             if (capacity > 0) {
    //                 capacity--;
    //                 ans = max(ans, passengers[j]);
    //             }
    //             j++;
    //         } else {
    //             i++;
    //         }
    //     }
    //     return ans;
    

    }
};
// @lc code=end

