class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        //sort the heights
        sort(heights.begin(), heights.end());

        //if height =1, then return 1
        if(heights.size() == 1)
            return heights[0];

             //take the one largest heights from the end 
        //and then take the next one heights from the end 
        //and so on comparing the two heights 


        int max_area1 = 0;
        int i = heights.size() - 1;
        int j = i - 1;
        while(i >= 0)
        {
            int area = (i - j + 1) * heights[i];
            if(area > max_area1)
                max_area1 = area;
            i--;
            while(i >= 0 && heights[i] <= heights[i+1])
                i--;
            j = i;
        }
        //return max_area1;
        //

        //take the two largest heights from the end and add them
        //and then take the next two heights from the end and add them
        //and so on comparing the two heights and adding them
        int max_area = 0;
        int k = heights.size() - 2;
        int l = heights.size() - 1;
        while(k >= 0)
        {
            int area = (l - k + 1) * heights[k];
            if(area > max_area)
                max_area = area;
            k--;
            while(k >= 0 && heights[k] <= heights[k+1])
                k--;
            l = k;
        } 
       // return max_area;

       //compare max_area1 and max_area and return the max
         return max(max_area1, max_area);
         

        
    }
};