class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {

        // You are given a 2D integer array stockPrices where stockPrices[i] = [dayi, pricei] indicates the price of the stock on day dayi is pricei. 
        // A line chart is created from the array by plotting the points on an XY plane with the X-axis representing the day and the Y-axis representing the price and 
        // connecting adjacent points. One such example is shown below:

int count = 0;
int n=stockPrices.size();

vector<int> v;
vector<int> v1;

// int arr[n];


//difference between day and price in stockPrices
for(int i=0;i<n;i++)
{
    v.push_back(abs(stockPrices[i][0]-stockPrices[i][1]));
}
        
    //    return v.size();










// for(int i=0;i<n-1;i++)
// {
//   // abs(stockPrices[i][0]-stockPrices[i+1][0])

//     v.push_back(abs(stockPrices[i][0]-stockPrices[i+1][0]));

//     //put the difference in array
  




// }

//diiference between two stock prices stored in v

// for(int i=0;i<n-1;i++)
// {
//   v.push_back(stockPrices[i][1]-stockPrices[i+1][1]);
// }

// //print the array





// //return v.size();




// for(int i=0;i<n-1;i++)
// {

//     v1.push_back(abs(stockPrices[i][1]+stockPrices[i+1][1]));


// }
//        // return v1.size();


// //we match v[i] with v[i+1] or v1[i] with v1[i+1] is same then continue else count++


for(int i=0;i<v.size()-1;i++)
{

    if(v[i]==v[i+1])
    
    {
        count++;
        
       // i+=2;
    }
    
    

}
   
//     // if(v[i]==v[i+1] || v1[i]==v1[i+1])
//     // {
//     //     continue;
//     // }
//     // else
//     // {
//     //     count+=2;
//     // }

// }

 return count;















        
    }
};