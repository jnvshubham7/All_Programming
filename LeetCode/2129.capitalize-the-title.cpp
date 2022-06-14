/*
 * @lc app=leetcode id=2129 lang=cpp
 *
 * [2129] Capitalize the Title
 */

// @lc code=start
class Solution {
public:
    string capitalizeTitle(string title) {

        int n = title.size();
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(title[i]==' ')
            {
                if(cnt<=2)
                {
                    title[i-cnt] = title[i-cnt]-'A'+'a';
                }
                cnt = 0;
            }
            else
            {
                if(cnt==0)
                {
                    if(title[i]>='a' && title[i]<='z')
                    {
                        title[i] = title[i]-'a'+'A';
                    }
                }
                else
                {
                    if(title[i]>='A' && title[i]<='Z')
                    {
                        title[i] = title[i]-'A'+'a';
                    }
                }
                cnt++;
            }
        }
        if(cnt<=2)
        {
            title[n-cnt] = title[n-cnt]-'A'+'a';
        }
        return title;
        
    }
};
// @lc code=end

