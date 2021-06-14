#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void permituations(string s1,string s2,int a[],int n)
{

    if(s1.size()==s2.size())
    {
        cout<<s2<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            permituations(s1,s2+s1[i],a,n);
            a[i]=0;
        }
    }
}
int main() 
{
	string s1;
	cout<<"enter a string: ";
	cin>>s1;
	string s2="";
	int n=s1.size();
	int a[n]={0};
	permituations(s1,s2,a,n);
	return 0;
}
