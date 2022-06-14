class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int n=prices.size();
        if(n==0)
            return 0;


            //prices = [7,1,5,3,6,4]
        int ans=0;
        int min=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                if(prices[i]-min>ans){
                    ans=prices[i]-min;
                }
            }   
        }
        return ans;





       



      


            // ll max_profit=0;
            // ll profit=0;

            // for(int i=0;i<n;i++){
            //     if(i==0){
            //         profit=0;
            //     }
            //     else{
            //         if(prices[i]>prices[i-1]){
            //             profit+=prices[i]-prices[i-1];
            //         }
            //         else{
            //             profit=0;
            //         }
            //     }
            //     if(profit>max_profit)
            //         max_profit=profit;
            // }
            // return max_profit;


            // for(int i=0;i<n;i++){
            //     for(int j=i+1;j<n;j++){
            //         if(prices[j]>prices[i]){
            //             profit=prices[j]-prices[i];
            //             if(profit>max_profit)
            //                 max_profit=profit;
            //         }
            //     }
            // }
            // return max_profit;






            //store all element in vector and make pair with index
            //sort the vector based on the pair
            //iterate through the vector and find the max profit
            //return max profit
        // vector<pair<int,int>> v;
        // for(int i=0;i<n;i++){
        //     v.push_back(make_pair(prices[i],i));
        // }
        // //sort(v.begin(),v.end());
        // int max=0;
        // for(int i=0;i<n-1;i++){
        //     if(v[i+1].first-v[i].first>max)
        //         max=v[i+1].first-v[i].first;
        // }
        // return max;


            //iterate through the vector find min element and max element of the vector
            //but index of max is greater than index of min


        // int min=prices[0];

        // int max=prices[0];
        // int max_profit=0;
        // for(int i=1;i<n;i++){
        //     if(prices[i]<min){
        //         min=prices[i];
        //         max=prices[i];
        //     }
        //     else{
        //         if(prices[i]>max){
        //             max=prices[i];
        //         }
        //         else{
        //             if(max-min>max_profit){
        //                 max_profit=max-min;
        //             }

        //         }

        //     }









            //return maximum profit by buying and selling at most once


        // int buy=prices[0];
        // int sell=prices[0];
        // int profit=0;
        // for(int i=1;i<n;i++){
        //     if(prices[i]<buy){
        //         buy=prices[i];
        //         sell=prices[i];
        //     }
        //     else{
        //         if(prices[i]>sell){
        //             sell=prices[i];
        //         }
        //         else{
        //             profit+=sell-buy;
        //             buy=prices[i];
        //             sell=prices[i];
        //         }
        //     }
        // }
        // profit+=sell-buy;
        // return profit;













            // int max_profit=0;
            // int profit=0;
            // for(int i=price.size()-1;i>=0;i--){
            //     for(int j=i;j<price.size();j++){
            //         profit=prices[i]-prices[j];
            //         if(profit>max_profit)
            //             max_profit=profit;
                       
                            
                   
            //     }
            //     // sum+=prices[i];
            //     // if(sum>max_profit)
            //     //     max_profit=sum;
            //     // if(sum<0)
            //     //     sum=0;
            // }


            // return max_profit;
        
    }
};