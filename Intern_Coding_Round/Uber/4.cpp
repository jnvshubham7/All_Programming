vector<int>  solve(int n, vector<int>&v){
    vector<int>res(n, 0);
    
    bool flag = true;
    
    for(int bit=0; bit<n; bit++){
        int carry = v[bit]?1:0;
        
        if(carry) flag = false;
        
        for(int i=0; i<n; i++){
            res[i]*=2;
            res[i]+=carry;
            carry = res[i]/6;
            res[i] = res[i]%6;
        }
        
    }
    if(flag){
        cout<<0<<'\n';
        return;
    }

//remove unnecessary zeros
    vector<int>ans;
    for(int i=n-1; i>=0; i--){
        if(res[i]) flag = true;
        if(flag) ans.push_back(res[i]);
    }


    reverse(ans.begin(), ans.end() );
   return ans;
}




vector<int> solution(vector<bool> v) {

    return solve(v.size(), v);


//     Given a number in base 2, convert it into base 6

// For e.g.

// 1100 in base 2 represented as [false, false, true, true] in test #1,
// 12 in base 10, and
// 20 in base 6 represented as [0, 2] in test #1.
// [execution time limit] 1 seconds (cpp)

// [input] array.boolean base2

// Max length = 100

// if ith position of the array is true that means the ith position of the number is 1.

// [output] array.integer

// ith position of the array represents the ith position of the number is in base 6



    // vector<int> result;
    // int n = v.size();
    // int i = 0;
    // int j = 0;
    // int count = 0;
    // int sum = 0;
    // while (i < n) {
    //     if (v[i]) {
    //         sum += pow(2, j);
    //         count++;
    //     }
    //     j++;
    //     i++;
    // }
    // while (sum > 0) {
    //     result.push_back(sum % 6);
    //     sum /= 6;
    // }
    // reverse(result.begin(), result.end());
    // return result;





}


int main()
{
    vector<bool> v = {false, false, true, true};
    vector<int> ans = solution(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
