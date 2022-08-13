
  int count(int N, vector<int> A, int X) {
    // code here


int ans = N;//worstcase change all bits of all nos to 1
        int mask = 0;
        for(int i=30; i>=0; i--){
            if((X>>i)&1){
                mask ^= (1<<i);//these ones are compulsory to make atleast equal to X
                continue;
            }
            int alternate_mask = (mask^(1<<i));
            //this alternate_mask is greater than X
            int cnt = 0;
            for(int j=0; j<N; j++){
                if((A[j]&alternate_mask) != alternate_mask){
                    cnt += 1;//this no bit positions are to be changed
                }
            }
            ans = min(ans,cnt);
        }
        return ans;











    // Given an array A[ ] of N integers and an integer X. 
    // In one operation, you can change the ith element of the array to any integer 
    // value where 1 ≤ i ≤ N. 
    // Calculate minimum number of such 
    // operations required such that the bitwise AND of all the 
    // elements of the array is strictly greater than X.


    // int n = A.size();
    // int ans = 0;
    // for (int i = 0; i < n; i++) {
    //     if (A[i] & X == 0) {
    //         ans++;
    //     }
    // }
    // return ans;


    
  }
