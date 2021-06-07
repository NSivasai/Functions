//Factorial using Recursion dynamic program
#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=n*fact(n-1);
}
int main()
{
	int n;
	cout<<"Enter a number to find factorial:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<fact(n);
	return 0;
}
