#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;

        // Calculate the maximum number of layers
        int ans = 0;

        int x=c+h;

        if(b>x)

        {
            ans=2*x+1;

        }

        else

        {
            ans=2*b-1;
           

        }
       

        cout << ans << endl;
    }

    return 0;
}
