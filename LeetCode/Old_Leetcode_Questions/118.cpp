class Solution {
public:
    vector<vector<int>> generate(int numRows) {



vector<vector<int>> v(numRows);
v[0].push_back(1);

for(int i=1;i<numRows;i++){
    v[i].push_back(1);
    for(int j=1;j<i;j++){
        v[i].push_back(v[i-1][j-1]+v[i-1][j]);


    }

    v[i].push_back(1);

}
return v;























        //use pascal's triangle to generate the result
        // vector<vector<int>> res;
        // if(numRows==0) return res;
        // res.push_back(vector<int>{1});
        // if(numRows==1) return res;
        // res.push_back(vector<int>{1,1});

        // //create numsRows number of passcal's triangle use dp method
        // for(int i=2;i<numRows;i++){
        //     vector<int> v;
        //     v.push_back(1);
        //     for(int j=1;j<i;j++){
        //         v.push_back(res[i-1][j-1]+res[i-1][j]);
        //     }
        //     v.push_back(1);
        //     res.push_back(v);
        // }






        // return res;

        
        
    }
};