#include <bits/stdc++.h>

using namespace std;

string rtrim(const string &);
vector<string> split(const string &);

// Complete the solve function below.
int solve(string a, string b, string c) {

    // You are given three strings ,  and . From the strings  and , 
    // you can create all possible strings  such that  contains atleast
    //  one character from both the strings, and the order of all the selected characters in individual strings is preserved.





    int n=a.size();
    int m=b.size();
    int k=c.size();
   
   int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=1;
            }
            else if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][m];



    





























}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string abc_temp;
    getline(cin, abc_temp);

    vector<string> abc = split(rtrim(abc_temp));

    string a = abc[0];

    string b = abc[1];

    string c = abc[2];

    int result = solve(a, b, c);

    fout << result << "\n";

    fout.close();

    return 0;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
