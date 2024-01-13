#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q;




   

   
    while (q--) {
        int l, r;
        cin >> l >> r;


        int sum=0;

        int cnt=0;






      for(int i=0;i<n;i++)
      {
        for(int j=l;j<=r;j++)
        {

            
            if(arr[i]%j)
            {
                cnt++;



            }

            if(cnt==n-1)
        {
            sum+=j
            cnt=0;
        }





        }

        cnt





        
      }








       
    }

    return 0;
}
