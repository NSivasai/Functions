#include<bits/stdc++.h>
using namespace std;
int revarray(int l,int r,int ar[])
{
	if(l>=r)
	return 0;
	swap(ar[l],ar[r]);
	revarray(l+1,r-1,ar);
}
int main()
{
	int n;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter array elements";
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	revarray(0,n-1,ar);
	cout<<"after reversing:";
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
}
