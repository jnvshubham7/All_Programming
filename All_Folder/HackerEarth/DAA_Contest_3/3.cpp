#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <algorithm>

/*
    Time Complexity: O(N! * log(N!))
    Space complexity: O(N * N!)
    
    Where N is the length of the given string.
*/



void generatePermutationsHelper(string &str, int l, int r, vector<string> &ans)
{
    // base case
    if (l == r)
    {
        ans.push_back(str);
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(str[l], str[i]);
        generatePermutationsHelper(str, l + 1, r, ans);
        // backtrack
        swap(str[l], str[i]);
    }
}

vector<string> generatePermutations(string &str)
{
    // stores the permutations of the string
    vector<string> ans;

    int l = 0;
    int r = str.size() - 1;

    // call the recursive function
    generatePermutationsHelper(str, l, r, ans);

    // lexicographically increasing order
    sort(ans.begin(), ans.end());

    return ans;
}

int main(){

    int t;
    cin>>t;
    while(t--){

        string str;
        cin>>str;

        vector<string> ans = generatePermutations(str);

        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i];
        }
        
    }
    cout<<endl;


    return 0;
}