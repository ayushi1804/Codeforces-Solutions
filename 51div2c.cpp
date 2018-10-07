#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int b[n];
   map<int,int>myp;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	myp[a[i]]++;
   }
   map<int,char>myp1;
   int ac=0,bc=0;
   for(int i=0;i<n;i++)
   {
   	if(myp[a[i]]==1)
   	{
   		if(ac>bc)
   		{
   			bc++;
   			myp1[i]='B';
   		}
   		else
   		{
   			ac++;
   			myp1[i]='A';
   		}

   	}
   	else if(myp[a[i]]==2)
   	{
   		if(ac>bc)
   		{
   			bc++;
   			myp1[i]='B';
   			myp[a[i]]=-1;
   			ac++;
   		}
   		else
   		{
   			ac++;
   			myp1[i]='A';
   			myp[a[i]]=-2;
   			bc++;
   		}
   	}
   	else if(myp[a[i]]==-1)
   		{myp1[i]='A';}
   	else if(myp[a[i]]==-2)
   		myp1[i]='B';
   }
   if(ac==bc)
   { cout<<"YES"<<endl;
   	for(int i=0;i<n;i++)
   	{
   		if(myp1[i]=='A'||myp1[i]=='B')
   			cout<<myp1[i];
   		else 
   			cout<<"A";
   	}
   	return 0;
   }
   char c;char c1;
   int mini,maxi;
   if(ac>bc)
   	{
   		mini=bc;
   		maxi=ac;
   		 c='B';
   		 c1='A';
   	}
   else 
   	{mini=ac;c='A';maxi=bc;c1='B';}
   map<int,int>mark;
   for(int i=0;i<n;i++)
   {
   	if(myp[a[i]]>2&&mark[a[i]]!=1)
   	{
   		mark[a[i]]=1;
   		myp1[i]=c;
   		mini++;
   	}
   	if(mini==maxi)
   		break;
   }
   if(mini!=maxi)
   	cout<<"NO"<<endl;

   else 
   { cout<<"YES"<<endl;
   	for(int i=0;i<n;i++)
   	{
   		if(myp1[i]=='A'||myp1[i]=='B')
   			cout<<myp1[i];
   		else 
   			cout<<c1;
   	}
   }
    return 0;
}
