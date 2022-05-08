class Solution{
public:
    int minOperations(int *a,int n)
    {

        int sum=0;
        priority_queue<int ,vector<int>, greater<int> >pq;
         for (int i = 0; i < n; i++) {
        if (!pq.empty() && pq.top() < a[i]) {
           sum+=(a[i]-pq.top());
           pq.push(a[i]);
           pq.pop();
        }
        pq.push(a[i]);
    }
    return sum;


        
    }
};