#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,x1,y1;
   double D;
   cout<<"Enter the size of matrix"<<endl;
   cin>>n;
   cout<<"Enter the coordinates of the point"<<endl;
   cin>>x1>>y1;
   int diff=x1-y1;
    int k;
   cout<<"Enter the value of k"<<endl;
   cin>>k;
  while(x1<n && y1<n)
  {
      multimap<double,pair<int,int>>mp;
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           
               D=sqrt(pow(x1-i,2) + pow(y1-j,2));
               mp.insert(make_pair(D, make_pair(i, j)));
 
           
           
       }
   }
   
   
   cout<<"The coordinates of the point are "<<x1<<" "<<y1<<endl;
   x1++;
   y1++;
   cout<<"The nearest neighbours are"<<endl;
   int c=0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
           
           if(c==k+1)
           continue;
           c++;
       
           if( (itr->first)>0)
           cout<< itr->second.first << " " << itr->second.second << "\n";
    }
 
    cout<<"The farthest neighbours are"<<endl;
 
int f=0;
   for (auto itr = mp.end(); itr != mp.begin(); itr--) {
         
        if(f==k+1)
        continue;
           f++;
     
           if(itr!=mp.end() && (itr->first)>0)
           cout << itr->second.first << " " << itr->second.second << "\n";
    }
}
}
