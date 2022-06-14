class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        
        
          int n ;
        n = arr.size();
        //check all interger in vector is next permutation or not
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                int j;
                for(j=n-1;j>i;j--)
                {
                    if(arr[j]>arr[i-1])
                    {
                        swap(arr[i-1],arr[j]);
                        break;
                    }
                }
                reverse(arr.begin()+i,arr.end());
                break;
            }
        }



    
        
    }
};