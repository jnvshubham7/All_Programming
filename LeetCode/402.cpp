class Solution {
public:
    string removeKdigits(string num, int k) {



        


        //remove k digits from num

        //which will make num is smallest possible
        //so we need to find the smallest possible num


        //remove all 0 from the front of num
        //if num is all 0, return 0


        //

















        //all digit of num store in map 
        // unordered_map<char, int> m;
        // for (int i = 0; i < num.size(); i++)
        // {
        //     m[num[i]]++;
        // }
        // //m[i]>m[i+1] then erase m[i] 
        // //thi will do k times
        // for (int i = 0; i < k; i++)
        // {
        //     for (auto it = m.begin(); it != m.end(); it++)
        //     {
        //         if (it->second > m[it->first + 1])
        //         {
        //             m.erase(it->first);
        //             break;
        //         }
        //     }
        // }
        // //convert map to string

        // string ans = "";
        // for (auto it = m.begin(); it != m.end(); it++)
        // {
        //     ans += it->first;
        // }
        // //remove all 0
        // while (ans[0] == '0' && ans.size() > 1)
        // {
        //     ans.erase(0, 1);
        // }
        // return ans;

        
    }
};