#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
using namespace std;

#define iof freopen("input.txt","r", stdin) ;freopen("output.txt","w", stdout) ;
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define vec vector<long long>
#define pb push_back
#define ll  long long
#define f(b) for(int i=0;i<b;i++)
#define f2(b) for(int j=0;j<b;j++)
#define f3(b) for(int k=0;k<b;k++)
#define endl '\n'
#define pi pair<int,int>
#define INF 1000000000000000001

long long pow(long long x, long long y){ if (y == 0) return 1; else if (y % 2 == 0) return pow(x, y / 2) * pow(x, y / 2);else return x * pow(x, y / 2) * pow(x, y / 2);}
long long dig(long long n) {return floor(log10(n) + 1);}

int main()
{
	cin.tie(0);cout.tie(0);
	#define int long long //Not good practice, for testing purpose only
   // int t; cin>>t; while(t--)
    {
        int n,m;
        int x;

        vec v,v1;

        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.pb(x);
        }

        sort(v.begin(),v.end());

        for(int i=0;i<m;i++)
        {
            cin>>x;
            v1.pb(x);
        }

        sort(v1.begin(),v1.end());

        int a = v[0];

        int ans = 0;

        for(int i=0;i<m;i++)
        {

            if(v1[i]>=a){break;}
            else ans+=n;
        }

        cout<<ans;
}
}
