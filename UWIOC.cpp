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
	io
	#define int long long
   int t; cin>>t; while(t--)
    {
        int n,k,x,a,b;

        cin>>n>>k;

        multiset<pair<int,int>> mp;

        for(int i=0;i<n+1;i++)
        {
           cin>>x;
           mp.insert(make_pair(x,i));
        }

        for(int i=0;i<n;i++)
        {
            auto it = mp.begin();
            auto it2 = mp.end();
            it2--;

            a = it->first;

            if(a==k){cout<<"0 0 "<<it->second<<" "<<a<<endl;continue;}

            a = k - it->first;
            b = it2->second;

            //cout<<k<<" "<<it->first<<endl;

            cout<<it->second<<" "<<it->first<<" "<<it2->second<<" "<<a<<endl;

            mp.insert(make_pair(it2->first - a,b));

            mp.erase(it);
            mp.erase(it2);
            //for(auto it:mp)cout<<it.first<<" ";
            //cout<<endl;

        }

    }
}
