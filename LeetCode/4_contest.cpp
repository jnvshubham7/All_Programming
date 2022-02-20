class Solution{
  public:


  //binary_search(v.begin(),v.end(),-v[i] this function 
  








vector <int> findPairs(int arr[], int n) 





    {


       


        //find the pairs in the array same number in negative and positive store that number in map

        //store that number in vector which negative and positive number in map
        //same number in negative and positive store that number in map

        unordered_map<int,int> m;

        vector<int> v;

        //store all the number in vector
        for(int i=0;i<n;i++)
        {
            v.push_back(arr[i]);
        }

        //sort the vector
        sort(v.begin(),v.end());

        //same number in negative and positive store that number in map
        for(int i=0;i<n;i++)
        {

            //if v[i] && -v[i] is present vector then store both number in map pairwise
            if(binary_search(v.begin(),v.end(),-v[i]))
            {
                m[v[i]]=1;
                m[-v[i]]=1;
            }


            // if(v[i] && -v[i])
            // {
            //     m[-v[i]]++;
            //     m[v[i]]++;
                

            // }

            // if(m.find(v[i])!=m.end())
            // {
            //     m[v[i]]++;
            // }
            // else
            // {
            //     m[-v[i]]++;
            // }
        }

        //check the map if the number of same number in negative and positive
        // for(int i=0;i<n;i++)
        // {
        //     if(m.find(v[i])!=m.end())
        //     {
        //         if(m[v[i]]>=2)
        //         {
        //             v.push_back(v[i]);
        //         }
        //     }
        // }




        //store that number in vector which negative and positive number in map
        // for(int i=0;i<n;i++)
        // {
        //     if(m.find(v[i])!=m.end())
        //     {
        //         v.push_back(m[v[i]]);
        //     }
        // }

       


// for(int i=0;i<n;i++){
//    //check negative and positive same number is present in array 

//     // if(m.find(arr[i])!=m.end() ){
//     //      //if present then store that number in vector
//     //      v.push_back(m[arr[i]]);
//     //      v.push_back(arr[i]);
//     // if(m.find(arr[i])!=m.end()){
//     //      //if present then store that number in vector
//     //      v.push_back(m[arr[i]]);
//     //      v.push_back(arr[i]);
//     // }
// }



        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     if(m.find(arr[i])!=m.end())
        //     {
        //         v.push_back(m[arr[i]]);
        //         v.push_back(arr[i]);
        //     }
        //     else
        //     {
        //         m[-arr[i]]=arr[i];
        //     }
        // }
        // return v;








        // code here
    }

};