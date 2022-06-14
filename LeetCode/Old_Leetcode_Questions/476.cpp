class Solution {
public:
    long findComplement(int num) {

        //store in map bits of num
        unordered_map<long, long> m;
       long i = 0;
        while (num)
        {
            m[i] = num % 2;
            num = num / 2;
            i++;
        }
        //convert 0 to 1 and 1 to 0
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == 0)
            {
                it->second = 1;
            }
            else
            {
                it->second = 0;
            }
        }
   //convert map to int
        long ans = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            ans = ans * 2 + it->second;
        }
        return ans;












        //store in vector and return
        // vector<int> v;
        // for (auto it = m.begin(); it != m.end(); it++)
        // {
        //     v.push_back(it->second);
        // }
        // return v;


      

       

     
    


        //first convert num to binary and then find complement
        //then convert complement to decimal
        //then return decimal
        // int ans = 0;
        // int i = 0;
        // while(num){
        //     if(num%2==0){
        //         ans += pow(2,i);
        //     }
        //     num = num/2;
        //     i++;
        // }
        // return ans;

        
    }
};












//  string onesComplement(string S,int N){

//      //change all 1 to 0 and 0 to 1
//         for(int i=0;i<N;i++){
//             if(S[i]=='1'){
//                 S[i]='0';
//             }
//             else{
//                 S[i]='1';
//             }
//         }
//         return S;




//         //code here
//     }