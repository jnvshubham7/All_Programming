class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size();


           vector<vector<int>> temp(matrix);
    int size=matrix.size();
    for(int i=0;i<size;i++)
        for(int j=0; j<size;j++)
            matrix[i][j] = temp[n-j-1][i];

        //rotate the matrix by 90 degree clockwise
        //first transpose the matrix
        //then reverse the matrix

        //code here
       

//all the elements of ith row store in temp vector
        // vector<vector<int>> temp(n,vector<int>(n));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         temp[i][j]=matrix[j][i];
        //     }
        // }

        // //all the elements of jth column swap to ith row in matrix
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=matrix[i][n-1-j];
        //     }
        // }

        // //all the elements of n-i-1th row swap to jth column in matrix
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=matrix[n-1-i][j];
        //     }
        // }
        // //all the elements of n-j-1th column swap to n-i-1th row in matrix
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=matrix[n-1-j][n-1-i];
        //     }
        // }

        // //all the temp elements swap to n-j-1th column in matrix
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=temp[i][j];
        //        // reverse(matrix[i].begin(),matrix[i].end());

        //     }
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }

        //reverse in every column of matrix
        // for(int i=0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }

        //every column of matrix  from i to i+n 
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=matrix[i][n-1-j];
        //     }
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }


//  int n=matrix.size();
        
// //all the elements of jth column store in temp vector
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         temp[i][j]=matrix[j][i];
//     }
// }
      
//         //all the elements of ith row swap to jth column in matrix
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=matrix[n-1-j][i];
//             }
//         }
      

//         //all the elements of n-j-1th column swap to ith row in matrix
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=matrix[n-1-i][n-1-j];
//             }
//         }
      
//         //all the elements of n-i-1th row swap to n-j-1th column in matrix
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=matrix[j][n-1-i];
//             }
//         }
       

//         //all the temp elements swap to n-i-1th row in matrix
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=temp[i][j];
//                 reverse(matrix[i].begin(),matrix[i].end());
//             }
//             //reverse(matrix[i].begin(),matrix[i].end());
//         }

//         //swap i and n-i-1th row of matrix
//         // for(int i=0;i<n;i++){
//         //     swap(matrix[i],matrix[n-1-i]);
//         // }

       




    


//reverse all jth column
//        for(int i=0;i<n;i++){
//            reverse(matrix[i].begin(),matrix[i].end());
//        }
//        //reverse all i th row
//        for(int i=0;i<n;i++){
//            reverse(matrix[i].begin(),matrix[i].end());
//        }
//        //reverse all jth column
//        for(int i=0;i<n;i++){
//            reverse(matrix[i].begin(),matrix[i].end());
//        }
        //reverse the matrix to get the original matrix



        //return matrix;
    


       
















        //all element of ith row move to n-jth column



        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         swap(matrix[i][j],matrix[j][i]);
        //     }
        // }




        // //all element of jth column move to n-i+1th row
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n/2;j++){
        //         swap(matrix[i][j],matrix[n-i-1][n-j-1]);
        //     }
        // }







       



     //   for()

        //rotate the matrix by 90 degree clockwise





        //given matrix is a n*n matrix and we need to rotate it by 90 degree clockwise
        //first transpose the matrix


        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         swap(matrix[i][j],matrix[j][i]);
        //     }
        // }

        








        
    }
};