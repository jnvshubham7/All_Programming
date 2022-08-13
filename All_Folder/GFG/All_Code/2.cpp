



// Implement the next permutation, which rearranges the list of numbers into Lexicographically 
// next greater permutation of list of numbers. 
// If such arrangement is not possible, it must be rearranged to the lowest possible order 
// i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){

        //Implement the next permutation in laxicographically


        int n = arr.size();
         //Implement the next permutation in laxicographically
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










        // int i,j;
        // for(i=N-1;i>0;i--)
        // {
        //     if(arr[i]>arr[i-1])
        //     {
        //         for(j=N-1;j>i;j--)
        //         {
        //             if(arr[j]>arr[i-1])
        //             {
        //                 swap(arr[i-1],arr[j]);
        //                 break;
        //             }
        //         }
        //         reverse(arr.begin()+i,arr.end());
        //         break;
        //     }
        // }
      //  return arr;
        //if no next permutation is possible, sort the array in ascending order
        if(i==0)
        {
            sort(arr.begin(),arr.end());
        }

        return arr;




    }
};