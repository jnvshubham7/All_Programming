class Solution {
public:
    int strStr(string haystack, string needle) {
        //check needle is substring of haystack 
        //if yes return index of first char of needle in haystack
        //if no return -1
        int n=haystack.size(),m=needle.size();
        if(m==0)
            return 0;
        if(n<m)
            return -1;
       // int i=0,j=0;
       //check needle is substring of haystack and print index of first char of needle in haystack use sybstr method
        if(haystack.substr(0,m)==needle)
            return 0;
        for(int i=1;i<n-m+1;i++){
            if(haystack.substr(i,m)==needle)
                return i;
        }
        return -1;

       
        // for(int i=0;i<n-m+1;i++){
        //     if(haystack[i]==needle[0]){
        //         int j=0;
        //         while(j<m && haystack[i+j]==needle[j])
        //             j++;
        //         if(j==m)
        //             return i;
        //     }
        // }
        // return -1;




        
    }
};