#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*b;
	*b=*a;
     *a=temp;
}
void hp(vector<int>&ht,int i)
{
	int size=ht.size();
	int maxi=i;
	int l=(2*i + 1);
	int r=(2*i +2);
	if(l<size&&ht[l]>ht[maxi])maxi=l;
	if(r<size&&ht[r]>ht[maxi])maxi=r;

	if(maxi!=i)
	{
		swap(&ht[i],&ht[maxi]);
		hp(ht,maxi);
	}
}
void insert(vector<int>&ht,int val)
{
	int siz=ht.size();
	if(siz==0)ht.push_back(val);
	else
	{
		ht.push_back(val);
		for(int i=siz/2 - 1;i>=0;i--)
		{
			hp(ht,i);
		}
	}
}
void del(vector<int>&ht,int num)
{
	int siz=ht.size();
	int i;
	for(i=0;i<siz;i++)
	{
		if(num==ht[i])break;
	}
	swap(&ht[i],&ht[siz-1]);
	ht.pop_back();
	for(int i=(siz/2)-1;i>=0;i--)hp(ht,i);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	vector<int>a;
	int n;cin>>n;
	int x;
	while(cin>>x){insert(a,x);}
	int sum=0;
	while(n--)
	{
		int x=a[0];
		sum+=x;
        del(a,x);
		insert(a,x/2);
	}
	cout<<sum<<"\n";
	return 0;
}