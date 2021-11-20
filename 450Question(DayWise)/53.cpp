#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

class Solution {
    public:
    int maximumSwap(int num) {
        string n=to_string(num);
        //keep in a map the last accurance of each digit
        unodered_map<int,int> last;
        for(int i=0;i<n.size();i++)
            last[n[i]-'0']=i;
        for(int i=0;i<n.size();i++)
        {
            for(int j=9;j>n[i]-'0';j--)
            {
                if(last[j]>i)
                {
                    swap(n[i],n[last[j]]);
                    return stoi(n);
                }
            }
        }
        return stoi(n);

    }

// int main(){
//   //  fileio;

    

//     return 0;
 };