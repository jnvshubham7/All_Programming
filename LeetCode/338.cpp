class Solution {
public:
    vector<int> countBits(int n) {

vector<int> countBits(int num) 
{
    if(num == 0)
        return {0};
    vector<int> res(num + 1, 0);
    
    res[0] = 0;
    res[1] = 1;
    
    for(int i = 2; i <= num; i++)
        res[i] = res[i / 2] + i % 2;
    
    return res;
}














        //  //store bits of each number in a vector from 0 to n
        // vector<int> v(n+1);
        // v[0]=0;
        // for(int i=1;i<=n;i++)
        // {
        //     v[i]=v[i&(i-1)]+1;
        // }
        // //return how many 1s present in each number in the vector
        // //find how many 1s in each number
        // return v;


        //convert int to binary from 0 to n and store in unordered_map4
        // unordered_map<int,int> m;
        // vector<int> res(n+1,0);
        // for(int i=0;i<=n;i++)
        // {
        //     m[i]=bitset<32>(i).count();
        // }

        // //iterate through the map and store the value in the vector
        // for(int i=0;i<=n;i++)
        // {
        //     res[i]=m[i];
        // }
        // return res;



       
       

       





        
    }
};