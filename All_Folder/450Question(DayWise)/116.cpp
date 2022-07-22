class Solution {
    public:
    double findMedianSortedArrays(vector& nums1, vector& nums2 {
        int m = nums1.size();
        int n = nums2.size();
        vector<double> res;
        for (int i=0;i<n;i++){
            res.push_back(nums1[i]);
        }

        for (int i=0;i<n;i++){
            res.push_back(nums2[i]);
        }

        sort(res.begin(),res.end());

        int k = res.size();
        double ans = 0;
        if (k%2 == 0){
            ans = (res[k/2] + res[k/2-1])/2;
        }
        else{
            ans = res[k/2];
        }
        return ans;
        

       
}
};
