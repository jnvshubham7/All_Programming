class Solution {
public:

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {


       // int n=spells.size();
        int m=potions.size();
        vector<int> ans;

        //sort potions
        sort(potions.begin(),potions.end());

        //use binary search to find the first potion that can be used
      for(auto& i:spells){
         
      
            int l=0;
            int r=m-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if((long long)i*potions[mid]>=success)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
               
                
            }
            ans.push_back(m-l);


      }

        return ans; 
        

    


// for(int i=0;i<n;i++)
// {
//     int curr_spell=spells[i];
//     int curr_potions=0;
//     for(int j=0;j<m;j++)
//     {
//         if(curr_spell*potions[j]>=success)
//         {
//             curr_potions++;
//         }
//     }
//     v.push_back(curr_potions);

// }
// return v;
    









    }
};