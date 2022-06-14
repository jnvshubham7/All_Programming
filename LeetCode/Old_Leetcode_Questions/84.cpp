class Solution {
private:
    vector<int> prevSmall;
    vector<int> nextSmall;

    void previousSmaller(vector<int> heights){
        stack<int> s;
        s.push(0);
        prevSmall.push_back(-1);
        for(int i=1;i<heights.size();i++){
            while(s.empty()==false && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                prevSmall.push_back(-1);
            else
                prevSmall.push_back(s.top());
            s.push(i);
        }
    }
    void nextSmaller(vector<int> heights){
        stack<int> s;
        int n = heights.size();
        s.push(n-1);
        nextSmall.push_back(n);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                nextSmall.push_back(n);
            else
                nextSmall.push_back(s.top());
            s.push(i);
        }
        //We used the reverse of array to find the next Smaller
        //So we need to reverse the vector
        reverse(nextSmall.begin(),nextSmall.end());
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        nextSmaller(heights);
        previousSmaller(heights);
        int res = 0;
        for(int i=0;i<heights.size();i++){
            int curr = heights[i];
            curr += (i-prevSmall[i]-1)*heights[i];
            curr += (nextSmall[i]-i-1)*heights[i];
            res=max(curr,res);
        }
        return res;
    }
};






















class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0, curr = 0, n = heights.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            while(s.empty() == false && heights[s.top()]>=heights[i]){
                int top = s.top();
                s.pop();
                if(s.empty())
                    curr = heights[top]*i;
                else
                    curr = heights[top]*(i-s.top()-1);
                res = max(curr,res);
            }
            s.push(i);
        }
        //For the elements left in the stack
        while(s.empty() == false){
                int top = s.top();
                s.pop();
                if(s.empty())
                    curr = heights[top]*n;
                else
                    curr = heights[top]*(n-s.top()-1);
                res = max(curr,res);
            }
        return res;
    }
};



























// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {

//         //sort the heights
//         sort(heights.begin(), heights.end());

//         //if height =1, then return 1
//         if(heights.size() == 1)
//             return heights[0];

//              //take the one largest heights from the end 
//         //and then take the next one heights from the end 
//         //and so on comparing the two heights 


//         int max_area1 = 0;
//         int i = heights.size() - 1;
//         int j = i - 1;
//         while(i >= 0)
//         {
//             int area = (i - j + 1) * heights[i];
//             if(area > max_area1)
//                 max_area1 = area;
//             i--;
//             while(i >= 0 && heights[i] <= heights[i+1])
//                 i--;
//             j = i;
//         }
//         //return max_area1;
//         //

//         //take the two largest heights from the end and add them
//         //and then take the next two heights from the end and add them
//         //and so on comparing the two heights and adding them
//         int max_area = 0;
//         int k = heights.size() - 2;
//         int l = heights.size() - 1;
//         while(k >= 0)
//         {
//             int area = (l - k + 1) * heights[k];
//             if(area > max_area)
//                 max_area = area;
//             k--;
//             while(k >= 0 && heights[k] <= heights[k+1])
//                 k--;
//             l = k;
//         } 
//        // return max_area;

//        //compare max_area1 and max_area and return the max
//          return max(max_area1, max_area);
         

        
//     }
// };