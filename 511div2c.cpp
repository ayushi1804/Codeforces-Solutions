#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;
bool vis[15000005];
int coun[15000005];
int main()
{   //ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   	{
   		scanf("%d",&a[i]);
   	    
   	}

   int gcd=a[0];
   for(int i=1;i<n;i++)
   	gcd=__gcd(gcd,a[i]);
   int flag=0;
   for(int i=0;i<n;i++)
      {   
      	a[i]=a[i]/gcd;
      	coun[a[i]]++;
      	if(a[i]>1)
      		flag=1;
      }
  if(flag==0)
  {
  	cout<<-1<<endl;
  	return 0;
  }

  ll ans=0;
  for(int i=2;i<=(1.5*(10000000));i++)
  { 
  	if(!vis[i])
  	{ 
      ll temp=0;
  	for(int j=i;j<=1.5*(10000000);j+=i)
  		{
  			vis[j]=1;
  			temp+=coun[j];
  		}
  		ans=max(ans,temp);
  		//cout<<ans<<" i"<<i<<endl;
  	}

  }
  
  printf("%d\n",n-ans );
    return 0;
}
