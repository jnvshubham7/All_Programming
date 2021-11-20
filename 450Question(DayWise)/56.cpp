class solution {
    public:
    int countDifference(vector<int>& A, vector<int>& B, int num) {
        int countA = 0, countB = 0;
        for(int i = 0; i < A.size(); i++) {
            if((A[i] != num) && (B[i] != num)) 
            return -1;
            if(A[i] != num) countA++;
            if(B[i] != num) countB++;
        
            
        }
        return min(countA, countB);
}
int minDominoRotations(vector<int>& A, vector<int>& B) {
   //first try to make A[0] the whole row, then try B[0]
   int res1 = countDifference(A, B, A[0]);
    int res2 = countDifference(A, B, B[0]);
    return min(res1, res2)>=0?min(res1, res2):-1;

    return min(res1, res2)>=0? min(res1, res2):max(res1, res2);
}

};



int helper(vector<int>& A, vector<int>& B, int x) {

    int total = 0;
    int countA = 0, countB = 0;
    for(int i = 0; i < A.size(); i++) {
      if(A[i] ==x || B[i] == x)
      total++;

        if(A[i] == x) countA++;
        if(B[i] == x) countB++;

    }
    if(total != A.size()) return -1;

    else return min(total - countA, total - countB);
   
}

int minDominoRotations(vector<int>& A, vector<int>& B) {
   int ans = helper(A, B, A[0]);
   if(ans != -1) return ans;
   else return helper(A, B, B[0]);
}