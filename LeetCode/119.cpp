class Solution {
public:
    vector<int> getRow(int n) {








        vector<int> v;
        v.push_back(1);
        if(n==0) return v;
        v.push_back(1);
        if(n==1) return v;

        for(int i=2;i<=n;i++){
            vector<int> v1;
            v1.push_back(1);
            for(int j=1;j<i;j++){
                v1.push_back(v[j-1]+v[j]);
            }
            v1.push_back(1);
            v=v1;
        }
        return v;
        


      
// vector<vector<int>> v(n+1);
// v[0].push_back(1);

// for(int i=1;i<n;i++){
//     v[i].push_back(1);
//     for(int j=1;j<i;j++){
//         v[i].push_back(v[i-1][j-1]+v[i-1][j]);


//     }

//     v[i].push_back(1);

// }
// return v;

// //return  nth row of pascal's triangle
// //return v[n];

// //store nth row of pascal's triangle in vector
// vector<int> v1;
// for(int i=0;i<v[n].size();i++){
//     v1.push_back(v[n][i]);
// }
//return v1;


       

     





















        //use pascal's triangle to generate the result
        // vector<int> res;
        // if(rowIndex==0) return res;
        // res.push_back(1);
        // if(rowIndex==1) return res;
        // res.push_back(1);
        // if(rowIndex==2) return res;

        // //create numsRows number of passcal's triangle use dp method
        // for(int i=2;i<=rowIndex;i++){
        //     vector<int> v;
        //     v.push_back(1);
        //     for(int j=1;j<i;j++){
        //         v.push_back(res[j-1]+res[j]);
        //     }
        //     v.push_back(1);
        //     res=v;
        // }

        // return res;
    

//Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:




        
    }
};