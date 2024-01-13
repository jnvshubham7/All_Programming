/*
 * @lc app=leetcode id=1417 lang=java
 *
 * [1417] Reformat The String
 */

// @lc code=start
class Solution {
    public String reformat(String s) {

        int cnt1=0;

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='0'&&s.charAt(i)<='9'){
                cnt1++;
            }
        }

        int cnt2=s.length()-cnt1;

        if(Math.abs(cnt1-cnt2)>1){
            return "";
        }

        char[] alp=new char[s.length()];

        char[] num=new char[s.length()];

        int i=0,j=0;

        for(int k=0;k<s.length();k++){
            if(s.charAt(k)>='0'&&s.charAt(k)<='9'){
                num[i++]=s.charAt(k);
            }else{
                alp[j++]=s.charAt(k);
            }
        }

        String ans="";

        if(cnt1>cnt2){
            for(int k=0;k<cnt2;k++){
                ans+=num[k];
                ans+=alp[k];
            }
            ans+=num[cnt2];

        }else if(cnt1<cnt2){

            for(int k=0;k<cnt1;k++){
                ans+=alp[k];
                ans+=num[k];
            }
            ans+=alp[cnt1];

        }else{
            for(int k=0;k<cnt1;k++){
                ans+=alp[k];
                ans+=num[k];
            }
        }

        return ans;

        
    }
}
// @lc code=end

