
int maximumSum( int n,int m, vector<vector<int>> &a) {
    for(int i=0;i<n;i++)
    sort(a[i].begin(), a[i].end());
    
    int sum=a[n-1][m-1];
    int prev=a[n-1][m-1];
    int i,j;
    
    for(int i=n-2;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j] < prev){
                prev=a[i][j];
                sum+=prev;
                break;
            }
        }
        
        if(j==-1)
        return 0;
    }
    
    return sum;

    // Complete the function
}