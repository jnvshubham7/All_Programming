
#include <bits/stdc++.h>
using namespace std;


int dist(string c, int d, string e, int f)
{
    // base case: empty strings (case 1)
   if (d == 0) {
        return n;
    }
 
    if (f == 0) {
        return m;
    }
 
    int cst;
 
    // if the last characters of the strings match (case 2)
    if (c[d - 1] == e[f - 1]) {
        cst = 0;
    }
    else {
        cst = 1;
    }
 
    return min (min(dist(c, d - 1, e, f) + 1,   // deletion    (case 3a))
            dist(c, d, e, f - 1) + 1),          // insertion (case 3b))
            dist(c, d - 1, e, f - 1) + cst);   // substitution (case 2 & 3c)
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    string y;
    cin>>x>>y;
    int a =x.size();int b = y.size();
    
    cout<<dist(x,a,y,b);
    

   
}