class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
       int n=arr.size();
       int count1=0;
         int count2=0;
        if(arr.size() < 3) return false;
        //check any any element is same in array return false
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] == arr[i+1]) return false;
        }

        //find max element in array and its index
        int max_index = 0;
        int max_element = arr[0];
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > max_element)
            {
                max_element = arr[i];
                max_index = i;
            }
        }
        //check before max index is increasing or not
        for(int i = 0; i < max_index; i++)
        {
            if(arr[i] > arr[i+1]) return false;
            count1++;
        }
        //check after max index is decreasing or not
        for(int i = max_index; i < arr.size() - 1; i++)
        {
            if(arr[i] < arr[i+1]) return false;
            count2++;
        }
        if(count1<1 || count2<1) return false;

    
        return true;

        

        // for(int i=0;i<max_index;i++)
        // {
        //     if(arr[i]>arr[i+1])
        //     {
        //         return false;
        //     }
        // }
        // for(int i=max_index+1;i<n;i++)
        // {
        //     if(arr[i]<arr[i-1])
        //     {
        //         return false;
        //     }
        // }


//create two loop one for left to right and one for right to left
// for(int i=0;i<n;i++){

//      while(arr[i+1] > arr[i]){
//          continue;
//          i++;
//      }
//      break;
//      int j=i;
//      //check arr[i] to arr[n-1] is decreasing
//         while(arr[j] < arr[j+1]){
//             continue;
//             j++;
//         }
//         if(j==n-1) return true;
//         else return false;
// }



//     for(int j=n-1;j>i;j--){
      
//     }
// }



// check this condition arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//  and also this condition arr[i] > arr[i + 1] > ... > arr[arr.length - 1]



        // int i = 0;
        // while(i < arr.size() - 1 && arr[i] < arr[i+1])
        // {
        //     i++;
        // }           
        // if(i == 0 || i == arr.size() - 1) return false;





      //check if any element is grater than both side return true 
        // for(int i = 0; i < arr.size() - 1; i++)
        // {
        //     if(arr[i] > arr[i+1]) return true;
        // }


//  for(int i = 0; i < arr.size() - 1; i++)
//         {
//             if((arr[i] > arr[i-1]) && (arr[i+1]> arr[i]) ) return true;
//         }




        //check arr[0] to arr[i] is increasing
        // for(int i = 0; i < arr.size() - 1; i++)
        // {
        //     if(arr[i] > arr[i+1]) return false;
        // }
         //check arr[i] to arr[n-1] is decreasing
        // for(int i = 0; i < arr.size() - 1; i++)
        // {
        //     if(arr[i] < arr[i+1]) return false;
        // }
       // return true;
        

       


        
    }
};