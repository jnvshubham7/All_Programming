
    
    vector<int> canMakeTriangle(vector<int> A, int N){
        // code here

        //take a[i] , a[i+1] , a[i+2] and check if they can form a triangle
        // if yes, return 1 else return 0

        vector<int> ans;
        for(int i=0;i<N-2;i++){
            for(int j=i+1;j<N-1;j++){
                for(int k=j+1;k<N;k++){
                    if(A[i]+A[j]>A[k]){
                        ans.push_back(1);
                        break;
                    }
                    else{
                        ans.push_back(0);
                    }
                }
            }
        }
        return ans;
    }

   