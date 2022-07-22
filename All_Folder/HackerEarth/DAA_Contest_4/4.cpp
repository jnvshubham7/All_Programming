#include <bits/stdc++.h>
using namespace std;



bool dp[1001][1001];
string longestPalindrome(string s) {
    int n = s.length();
    

// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rev_loop(i, a, b) for (int i = a; i > b; i--)
// #define pb push_back
// #define inf 1e18 + 5
// #define endl "\n"

// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define vi vector<int>
// #define vl vector<ll>

// struct trie{










    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	trie* arr[26];
    memset(dp,0,sizeof(dp));
    int mx = 1;
    int st=0;
        
    for(int i=0;i<n;i++)
    {
        

// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rev_loop(i, a, b) for (int i = a; i > b; i--)
// #define pb push_back
// #define inf 1e18 + 5
// #define endl "\n"

// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define vi vector<int>
// #define vl vector<ll>

// struct trie{










    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	trie* arr[26];
        dp[i][i]=1;
    }
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                st=i;
                mx=2;
            }
            
            

// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rev_loop(i, a, b) for (int i = a; i > b; i--)
// #define pb push_back
// #define inf 1e18 + 5
// #define endl "\n"

// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define vi vector<int>
// #define vl vector<ll>

// struct trie{










    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	trie* arr[26];
        }
        
     
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int ed = i + j - 1;
                
                if(dp[j+1][ed-1] && s[j]==s[ed])
                {
                    dp[j][ed]=1;
                    
                    if(i>mx)
                    {
                        mx=i;
                        st=j;
                    }
                }
            }
        }
    string ans;
    for(int i=st;i<=st+mx-1;i++)
    ans.push_back(s[i]);
        
    return ans;
}
int main() {

	string s;
    cin>>s;
	string ans1 = longestPalindrome(s);
    

// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rev_loop(i, a, b) for (int i = a; i > b; i--)
// #define pb push_back
// #define inf 1e18 + 5
// #define endl "\n"

// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define vi vector<int>
// #define vl vector<ll>

// struct trie{










    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	trie* arr[26];
	cout<<ans1<<endl;

	return 0;
}












// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double












// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rev_loop(i, a, b) for (int i = a; i > b; i--)
// #define pb push_back
// #define inf 1e18 + 5
// #define endl "\n"

// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define vi vector<int>
// #define vl vector<ll>

// struct trie{










    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	trie* arr[26];
// };

// struct trie* getNode()
// {
// 	struct trie* temp = new trie;
// 	loop(i,0,26)
// 		temp -> arr[i] = NULL;
// 	return temp;
// }

// void insert(string s , struct trie*root)
// {
// 	struct trie*temp = root;
// 	int n = s.length();
// 	loop(i,0,n)
// 	{
// 		int ind = s[i] - 'a';
// 		if(!temp -> arr[ind])
// 			temp -> arr[ind] = getNode();
// 		temp = temp -> arr[ind];
// 	}
// }

// bool check(struct trie*root , string&s , int n)
// {
// 	struct trie*temp = root;
// 	loop(i,0,n)
// 	{








        



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 		int ind = s[i] - 'a';
// 		if(!temp -> arr[ind])
// 			return false;
// 		temp = temp -> arr[ind];
// 	}
// 	return true;
// }

// int main()
// {
// 	vector<string>v;
// 	string s;
// 	getline(cin , s);
// 	s += " ";
// 	string str = "";
// 	int n1 = s.length();
// 	loop(i,0,n1)
// 	{
// 		if(s[i] == ' ')
// 			v.pb(str) , str = "";
// 		else
// 			str += s[i];
// 	}
	






// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;






// 	struct trie* root = getNode();
// 	int n = v.size();
// 	loop(i,0,n)
// 	{
// 		string s = v[i];
// 		int m = s.length();
// 		loop(i,0,m)
// 			insert(s.substr(i) , root);
// 	}

// 	int q;





    



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 	cin >> q;
// 	while(q--)
// 	{
// 		string s;
// 		cin >> s;
// 		int m = s.length();
// 		if(check(root , s , m))
// 			cout << "YES" << endl;









            



// // // C++ program to check whether two strings are
// // // Permutations of each other
// // #include <bits/stdc++.h>
// // using namespace std;

// // /* function to check whether two strings are
// // Permutation of each other */
// // bool arePermutation(string str1, string str2)
// // {
// // 	// Get lengths of both strings
// // 	int n1 = str1.length();
// // 	int n2 = str2.length();

// // 	// If length of both strings is not same,
// // 	// then they cannot be Permutation
// // 	if (n1 != n2)
// // 	return false;
// 		else
// 			cout << "NO" << endl;
// 	}
// }
