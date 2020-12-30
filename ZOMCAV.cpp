#include<bits/stdc++.h>
using namespace std;

// Use long long int in case of wrong answer
// Defining globally is not a good practice

signed main()
{

    int t;
    cin>>t;
    while(t--)
        {
            double sum=0;
            int n;
            cin>>n;
            vector<int> caves_initial(n+1), H(n+1), caves_final(n+1,0);

            for(int i=1;i<=n;i++)
                cin>>caves_initial[i];

            for(int i=1;i<=n;i++)
                cin>>H[i];

//------------------Difference Array--------------------------
for(int i=1;i<=n;i++)
    {
        int left = max(int(1), i-caves_initial[i]);
        int right = i+1+caves_initial[i];

		caves_final[left]++;
		if(right<=n)
            caves_final[right]--;
	}

	for(int i=1;i<=n;i++)
        caves_final[i]+=caves_final[i-1];

//------------------Difference Array--------------------------

	sort(caves_final.begin(),caves_final.end());
	sort(H.begin(),H.end());

	if(H==caves_final)
		cout<<"YES\n"; //endl may cause error in interactive problems
	else
		cout<<"NO\n";

    }
 }
