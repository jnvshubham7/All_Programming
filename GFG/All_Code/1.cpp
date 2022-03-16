class Solution
{
  public:


  // create isupper() function
    bool isupper(char c) {
        return c >= 'A' && c <= 'Z';
    }
  string arrangeString(string str)
    {


int sum=0;
        //store all capital letters in a vector and all integer in different vector
        vector<char> capital;
        vector<int> integer;
        for(int i=0;i<str.length();i++)
        {
            if(isupper(str[i]))
            {
                capital.push_back(str[i]);
            }
            else
            {
                integer.push_back(str[i]-'0');
            }
        }

        sort(capital.begin(),capital.end());

//sum of all integer
for(int i=0;i<integer.size();i++)
{
    sum=sum+integer[i];

}

//return all capital letters follwed by sum of all integer

        string ans="";
        for(int i=0;i<capital.size();i++)
        {
            ans=ans+capital[i];
        }
        ans=ans+to_string(sum);
        return ans;






    }
};