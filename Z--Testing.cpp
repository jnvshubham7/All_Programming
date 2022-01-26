class Solution {
public:
    int findLucky(vector<int>& arr) {

        //sort the array
        sort(arr.begin(),arr.end(), greater<int>());

        //store all elements in map and make pair of element and its frequency
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }

        //

        //sort the map with respect to element first


       // sort(m.begin(),m.end());



        //check if element is equal to frequency
        // for(auto it=m.begin();it!=m.end();it++)
        // {
        //     //sort map which is greater element
        //     // if(it->second==it->first)
        //     // {
        //     //     return it->first;
        //     // }



        //     //also check element is maximum possible element
        //     if(it->first>=it->second)
        //     {
        //         return it->first;
        //     }
        //     // if(it->second==it->first)
        //     // {


        //     //     return it->first;
        //     // }
        // }
        return -1;
        
    }
};