/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n=letters.size();
        int start=0,end=n-1;
        char res=' ';
        while(start<=end){
            int mid=(start+end)/2;
            if(letters[mid]==target){
                start=mid+1;
            }
            else if(letters[mid]>target){
                res=letters[mid];
                end=mid-1;
            }
            else if(letters[mid]<target){
                
                start=mid+1;
            }
        }

        if(res==' '){
            res=letters[0];
        }
        return res;
        
        
    }
};
// @lc code=end

