class Solution{
public:
    string LCP(string ar[], int n)
    {

         // code here
        sort(ar, ar + n);
        string ans = "";
        for(int i = 0; i < ar[0].size(); i++){
            bool flag = true;
            for(int j = 0;  j < n; j++){
                if(ar[j][i] != ar[0][i]){
                    flag = false;
                }
            }
            if(!flag){
                break;
            }
            ans += ar[0][i];
        }
        if(ans == "") ans = "-1";
        return ans;

        //return ar
       // return ar[0];








    //   int n = str.size();
    //     if(n==0) return "";
        
    //     string ans  = "";
    //     sort(begin(str), end(str));
    //     string a = str[0];
    //     string b = str[n-1];
        
    //     for(int i=0; i<a.size(); i++){
    //         if(a[i]==b[i]){
    //             ans = ans + a[i];
    //         }
    //         else{
    //             break;
    //         }
    //     }
        
    //     return ans;

        
//create new string and store char if in all string that char is same else break loop in that case





        // string ans = "";
        //int i,j;
        // for (int i = 0; i < ar[0].length(); i++)
        // {
        //     char ch = ar[0][i];
        //     for (int j = 1; j < n; j++)
        //     {
        //         if (ar[j][i] != ch)
        //         {
        //             break;
        //         }
        //     }
        //     if (j == n)
        //     {
        //         ans += ch;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // return ans;

    }
};