        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int mx = INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(a[i]>mx) mx=a[i];
        }
        cout<<mx<<endl;








