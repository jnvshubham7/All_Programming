#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}
void heapify(vector<int> &hT, int i)
{
  int size = hT.size();
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < size && hT[l] > hT[largest])
    largest = l;
  if (r < size && hT[r] > hT[largest])
    largest = r;

  if (largest != i)
  {
    swap(&hT[i], &hT[largest]);
    heapify(hT, largest);
  }
}
void insert(vector<int> &hT, int item)
{
  int sz = hT.size();
  if (sz == 0)
  hT.push_back(item);
  else
  {
    hT.push_back(item);
    for (int i = sz / 2 - 1; i >= 0; i--)
    heapify(hT, i);
  }
}
void dlt(vector<int> &hT, int num)
{
  int sz = hT.size();
  int i;
  for (i = 0; i < sz; i++)
  {
    if (num == hT[i])
    break;
  }
  swap(&hT[i], &hT[sz - 1]);
  hT.pop_back();
  for (int i = sz / 2 - 1; i >= 0; i--)
  heapify(hT, i);
}
int main()
{
   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   

    vector<int> hp;
    int n;
    cin>>n;
    int x;
    while(cin>>x)
    {
        insert(hp,x);
    }
    int sum=0;
    while(n--)
    {
        int x=hp[0];
        sum+=x;
        dlt(hp,x);
        insert(hp,x/2);

    }
    cout<<sum<<endl;
    return 0;

}