







class Solution{
  public:
    int minOperations(int arr[], int n, int k) {

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<n; i++) {
            pq.push(arr[i]);
        }

        int cnt=0;

        while(!pq.empty())
    {
         if(pq.top()>=k)break;
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        pq.push(a+b);
        cnt++;
    }

    return cnt;
    

        


    //     vector<int> v;
    //     for(int i=0;i<n;i++)
    //     {
    //         v.push_back(arr[i]);
    //     }



    //     int cnt=0;
    //    sort(v.begin(),v.end());
    //    while(v[0]<k)
    //    {
    //        cnt++;
    //        v[0]+=v[1];
    //        v.erase(v.begin()+1);
    //        sort(v.begin(),v.end());
    //    }
       
    //         return cnt;
        
        
    }
};
