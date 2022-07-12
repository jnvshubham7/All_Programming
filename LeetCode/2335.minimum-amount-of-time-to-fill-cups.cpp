/*
 * @lc app=leetcode id=2335 lang=cpp
 *
 * [2335] Minimum Amount of Time to Fill Cups
 */

// @lc code=start

class Solution {
public:
    int fillCups(vector<int>& amount) {

        int n = amount.size();

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            pq.push(amount[i]);
        }

        int cnt=0;

        while (pq.size() > 1 && pq.top() > 0) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            pq.push(a);
            pq.push(b);
            cnt++;
        }
        return cnt;


       





        //if there is only one cup, then we can fill it with any amount of water

        // if (n == 1) {
        //     return amount[0];
        // }

        // int cnt=0;

        //  for(int i=0;i<n;i++) {
        //      if(amount[i]==0) {
        //          cnt++;
        //      }
        //  }

        // if(cnt==n-1) {
        //     return amount[0];
        // }

        





        // int ans = 0;

        // int a=amount[0];
        // int b=amount[1];
        // int c=amount[2];


        // while(a>0 || b>0 || c>0) {

          
           


        //    if(a>0 && c>0)       
        //     {
        //         ans++;
        //         a--;
        //         c--;

               
               

                
        //         cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //     } 

        //     else  if(a>0 && b>0)
        //     {
        //         ans++;
        //         a--;
        //         b--;
                 
        //         cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //     }
           
        //     else if(b>0 && c>0)
        //     {
        //         ans++;
        //         b--;
        //         c--;
                 
        //         cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //     }

        //     else if(a==0)
        //     {
        //         if(b==0)
        //         {
        //             ans+=c;
        //             c=0;
        //             cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //         }
        //         else if(c==0)
        //         {
        //             ans+=b;
        //             b=0;
        //             cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //         }
        //         else
        //         {
        //             ans++;
        //             b--;
        //             c--;
                     
        //             cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //         }
                
        //     }
        //     else if(b==0)
        //     {
        //         if(c==0)
        //         {
        //             ans+=a;
        //             a=0;
        //             cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //         }
        //         else
        //         {
        //             ans++;
        //             a--;
        //             c--;
                     
        //             cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //         }
        //     }
        //     else if(c==0)
        //     {
        //         ans++;
        //         a--;
        //         b--;
                 
        //         cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        //     }


         

        
          
        




            
        // }

        //  return ans;





        // int ans = 0;
        // int i=0;
        // int j=n-1;
        // int k=0;
        
        // while(i<n && j>=0) {
        //     if(amount[i]==0) {
        //         i++;
        //         continue;
        //     }
        //     if(amount[j]==0) {
        //         j--;
        //         continue;
        //     }
        //     if(amount[i]==amount[j]) {
        //         ans+=amount[i];
        //         i++;
        //         j--;
        //         continue;
        //     }
        //     if(amount[i]<amount[j]) {
        //         ans+=amount[i];
        //         i++;
        //         continue;
        //     }
        //     if(amount[i]>amount[j]) {
        //         ans+=amount[j];
        //         j--;
        //         continue;
        //     }
        // }

        // return ans;

        // int ans=0;
        // int i=0;
        // int j=0;
        // int k=0;



        // while(i<n && j<n && k<n) {
        //     if(amount[i]==0) {
        //         i++;
        //         continue;
        //     }
        //     if(amount[j]==0) {
        //         j++;
        //         continue;
        //     }
        //     if(amount[k]==0) {
        //         k++;
        //         continue;
        //     }
        //     ans++;
        //     amount[i]--;
        //     amount[j]--;
        //     //amount[k]--;
        // }
        // return ans;






        
        // int sum=0;

        // for(int i=0;i<amount.size();i++)
        // {
        //     sum+=amount[i];
        // }


        // if(sum%2==0)
        
        //     return sum/2;
        
        // else
        
        //     return sum/2+1;
        


        
    }


    // int solve(vector<int>& amount) {
    //     int n = amount.size();
    //     int ans = 0;
    //    int a=amount[0];
    //     int b=amount[1];
    //     int c=amount[2];
    //     while(a>0 || b>0 || c>0) {
    //         if(a>0) {
    //             a--;
    //             b--;
    //             c--;
    //         }
    //         else if(b>0) {
    //             b--;
    //             c--;
    //         }
    //         else {
    //             c--;
    //         }
    //         ans++;
    //     }
    //     return ans;
    // }
};

// @lc code=end

