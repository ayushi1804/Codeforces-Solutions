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
    int n,d;
    cin>>n>>d;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {    int x1,y1;
    	cin>>x1>>y1;
    	//cout<<x1<<y1<<endl;
    	if((y1+x1-d)>=0&&(y1+x1+d-2*n)<=0&&(y1-x1-d<=0)&&(y1-x1+d)>=0)
    		cout<<"YES"<<endl;
    	else 
    		cout<<"NO"<<endl;
    }
    return 0;
}
