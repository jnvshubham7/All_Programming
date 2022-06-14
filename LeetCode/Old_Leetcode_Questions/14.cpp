class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {


         int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;

        // string ans = "";
        // if (strs.size() == 0)
        // {
        //     return ans;
        // }
        // //from starting check if all strings have same char at same index
        // //if yes then add that char to ans
        // //if not then break
        // int i = 0;
        // while (i < strs[0].size())
        // {
        //     char ch = strs[0][i];
        //     for (int j = 1; j < strs.size(); j++)
        //     {
        //         if (strs[j][i] != ch)
        //         {
        //             return ans;
        //         }
        //     }
        //     ans += ch;
        //     i++;
        // }
        // return ans;

        
    }
};












    // string longestCommonPrefix (string arr[], int N)
    // {


    //     if (N == 0)
    //     {
    //         return "";
    //     }
    //     //sort the array
    //     sort(arr, arr + N);

    //     string a=arr[0];
    //     string b=arr[N-1];

    //     string ans = "";
    //     int flag = 0;
      
    //     for(int i=0; i<a.size(); i++){
    //         if(a[i]==b[i]){
    //             ans = ans + a[i];
    //         }
    //         else{
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(ans==""){
    //         return "-1";
    //     }

    //     return ans;


        // for(int i=0; i<a.size(); i++){
        //     if(a[i]==b[i]){
        //         ans = ans + a[i];
        //     }
        //     else{
        //         break;
        //     }
        // }



        //  string a = str[0];
        // string b = str[n-1];
        
        // for(int i=0; i<a.size(); i++){
        //     if(a[i]==b[i]){
        //         ans = ans + a[i];
        //     }
        //     else{
        //         break;
        //     }
        // }
        
        // return ans;
        























        //if input is bigger return -1;






        //  string ans = "";
        // if (N == 0)
        // {
        //     return ans;
        // }
        // int flag = 0;
        // //from starting check if all strings have same char at same index
        // //if yes then add that char to ans
        // //if not then break 
        // //There's no common prefix in the given strings then return -1
        // for (int i = 0; i < arr[0].size(); i++)
        // {
        //     char ch = arr[0][i];
        //     for (int j = 1; j < N; j++)
        //     {
        //         if (arr[j][i] != ch)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (flag == 1)
        //     {
        //         break;
        //     }
        //     ans += ch;
        // }
        // if (ans == "")
        // {
        //     return "-1";
        // }
        // return ans;

    //}

    //     // int i = 0;
    //     // while (i < arr[0].size())
    //     // {
    //     //     char ch = arr[0][i];
    //     //     for (int j = 1; j < N; j++)
    //     //     {
    //     //         if (arr[j][i] != ch)
    //     //         {
    //     //             flag = 1;
    //     //             return ans;
    //     //             break;
    //     //             //return -1
    //     //            // ;
    //     //         }
    //     //     }
    //     //     ans += ch;
    //     //     i++;
    //     // }

    //     // return ans;
        

    //     // your code here
  //  // }
    
    
    