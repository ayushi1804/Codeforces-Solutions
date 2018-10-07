#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;
vector <ll>v;

void func(int pow,int cnt,ll num)
{
	if(pow==18)
	{
		v.pb(num);
		return ;
	}
	func(pow+1,cnt,num*10);
	if(cnt<3)
	{
		for(int i=1;i<=9;i++)
		{
			func(pow+1,cnt+1,num*10+i);
		}
	}
}

int main()
{
   func(0,0,0);
   sort(v.begin(),v.end());
   v.pb(1000000000000000000);
   int t;
   cin>>t;
   //for(int i=0;i<10000;i++)
   //	cout<<v[i]<<" ";
   while(t--)
   {
   	ll l,r;
   	cin>>l>>r;
   //	cout<<v[v.size()-1]<<endl;
   	std::vector<ll>:: iterator idx1,idx2;
   	 idx1=lower_bound(v.begin(),v.end(),l);
   	idx2=upper_bound(v.begin(),v.end(),r);
   	cout<<idx2-idx1<<endl;


   }
}
