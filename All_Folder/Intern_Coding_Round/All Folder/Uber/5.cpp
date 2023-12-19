int solution(string s) {


//     You are given a binary string (containing character 0 and 1 only) s of length n. You task is to convert all the 1s in this string to 0. To do this you can do the following :

// First choose an integer K and then perform the following operation any number of times :

// Choose any substring of this string such that length of substring is greater than or equal to K and change all 0s to 1 and all 1s to 0 in that substring i.e. for a substring [L,R] (R-L+1>=K) in s, for each i such that L<=i<=R, if si is 0 make it 1 and if it is 1 make it 0.
// Find the maximum integer K less than or equal to n that we can choose such that it is possible to convert the string to all 0s using above method.

// Constraints
// 1<=n<=100000

// Examples
// Input : 101
// Output : 2
// Explanation : If we choose K = 2, we can convert the string to all 0s by following way

// choose substring [0,1] = "10", then s becomes 011
// now choose substring [1,2] = "11", then s becomes 000
// It is the maximum K as we can not convert the sting to all 0s by choosing K = 3.
// Input : 10000
// Output : 4
// Explanation : We can choose K = 4 and convert the following way

// Choose substring [0,4] = "10000", the s becomes 01111
// Choose substring [1,4] = "1111", then s becomes 00000
// Input/Output
// [execution time limit] 1 seconds (cpp)

// [input] string s

// given binary string

// [output] integer

// Output the maximum K such that it is possible to convert s to all 0s by the operation.

 ll n = s.size()-1;
    ll pre[n+7];pre[0] = 0;
    ff(i,1,n) pre[i] = pre[i-1] + (s[i] == '1');
    ll ps[n+7];ps[0] = 0;
    ff(i,1,n) ps[i] = ps[i-1] + (s[i] == '0');
    //ff(i,1,n) cout<<ps[i]<<" ";
    //cout<<endl;
    //ff(i,1,n) cout<<pre[i]<<" ";
    int res = 9999999999;
    ff(i,0,n){
        res = min({res,(pre[i] + (ps[n]-ps[i])), (ps[i] + (pre[n] - pre[i]))});
    }
    return res;


   
    

}
