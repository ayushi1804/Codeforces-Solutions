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
     set<int>st;
    for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		st.insert(a[i]);
    	}
    map<int,pii>myp;
   

    for(int i=0;i<n;i++)
    {
    	if(myp[a[i]].f==0)
    	{
    		myp[a[i]]=mp(i+1,0);
    	}
    	else if(myp[a[i]].s!=-1)
    	{
    		if(myp[a[i]].s==(i+1-myp[a[i]].f)&&myp[a[i]].s!=0)
    		{
    			myp[a[i]]=mp(i+1,i+1-myp[a[i]].f);
    		}
    		else if(myp[a[i]].s==0)
    		{
    			myp[a[i]]=mp(i+1,i+1-myp[a[i]].f);
    		}
    		else 
    			myp[a[i]]=mp(i+1,-1);

    	}
    }
    set<int>::iterator it;
    int c=0;
    for(it=st.begin();it!=st.end();it++)
    {
    	int x=*it;
    	if(myp[x].s!=-1)
    	{
    		c++;
    	}
    }
    cout<<c<<endl;
    for(it=st.begin();it!=st.end();it++)
    {
    	int x=*it;
    	if(myp[x].s!=-1)
    	{
    		cout<<x<<" "<<myp[x].s<<endl;
    	}
    }

    return 0;
}
