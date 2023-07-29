/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
class Solution {
public:
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>




   vi NSL(vi &v)
   {
    int n=v.size();
    vi left;

    stack<pii> st;

    fr(i,n)
    {
       if(st.size()==0)
       {
        left.pb(-1);
       }
       else if(st.size()>0 && v[i]>st.top().first)
       {
        left.pb(st.top().second);
       }
       else
       {
        while(st.size()>0 && v[i]<=st.top().first)
        {
            st.pop();
        }
        if(st.size()==0)
        {
            left.pb(-1);
        }
        else
        {
            left.pb(st.top().second);
        }
       }


         st.push(mp(v[i],i));

    }

    return left;


   }








    vi NSR(vi &v)
    {
        int n=v.size();
        vi right;

        stack<pii> st;

       for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                right.pb(n);
            }
            else if(st.size()>0 && v[i]>st.top().first)
            {
                right.pb(st.top().second);
            }
            else
            {
                while(st.size()>0 && v[i]<=st.top().first)
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    right.pb(n);
                }
                else
                {
                    right.pb(st.top().second);
                }
            }

            st.push(mp(v[i],i));

    }

    reverse(all(right));

    return right;

    }




   int  MAH(vector<int> &heights)
   {
     int n=heights.size();

        int width=0;

       vi left=NSL(heights);
         vi right=NSR(heights);

         //print vi(left); and vi(right);

         //print left
            //print right

            for(int i=0;i<left.size();i++)
            {
               
              // cout<<heights[i]<<" "<<left[i]<<" "<<right[i]<<endl;
            }

        

         fr(i,n)
         {
             width=max(width,(right[i]-left[i]-1)*heights[i]);
         }

            return width;
   }



    int maximalRectangle(vector<vector<char>>& matrix) {

        int m=matrix.size();
        if(m==0) return 0;
        int n=matrix[0].size();
        int mx=0;
        vector<int> v(n);
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]=='0')
                {
                     v[j]=0;
                }
                else
                {
                    v[j]+=1;
                }
                    
            }
            
            mx = max(mx, MAH(v));
            cout<<mx<<" ";
        }
        return mx;


        

    }
};
// @lc code=end

