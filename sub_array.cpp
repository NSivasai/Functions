#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum1;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter sum:";
	cin>>sum1;
	int a[n];
	cout<<"enter elements:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				cout<<a[k];
				sum=sum+a[k];
			}
			if(sum==sum1)
				cout<<"->exists";
			
			cout<<endl;
		}
		
	}
}
