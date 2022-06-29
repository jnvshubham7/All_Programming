long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {


        long long sum=0;
        sort(A,A+N);
        for(int i=K1-1;i<K2;i++)
        {
            sum+=A[i];
        }
        return sum;
        // Your code goes here
    }