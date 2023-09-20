class Solution {
public:
    int countSymmetricIntegers(int l, int h) {

        if(h-l+1%2!=0)
            return 0;


        

        int cnt=0;

        for(int i=l;i<=h;i++)
        {
            string s=to_string(i);
            int n=s.length();
            bool flag=true;

           


          int x= accumulate(s.begin(),s.begin()+n/2,0);
          int y= accumulate(s.begin()+n/2+(n%2),s.end(),0);

            if(x!=y)
                flag=false;

            else {
                cnt++;
            }

            
          
        }

        return cnt;
        
    }
};