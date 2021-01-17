#include <bits/stdc++.h>
using namespace std;

int main()
{
    #define int long long  //Not a good practice
    int t; cin>>t; while(t--)
    {
        string s1,s2;

        cin>>s1>>s2;

        int cnt1=0,flag=1,zz=0;

        for(int i=0;i<s1.size(); i+=2)
        {

            if(s1[i] != s2[i] )
            {
               if(flag)
               {
		       flag=0;
                       cnt1++;
	       }
		    
            }
            else {flag=1;zz=1;}
        }

        int cnt2=0;

        flag=1,zz=0;

        for(int i=1;i<s1.size(); i+=2)
        {
             if(s1[i] != s2[i])
            {
                if(flag)
		{
			flag=0;
                	cnt2++;
		}
            }
            else {flag=1;zz=1;}
        }
        cout<<cnt1+cnt2<<endl;

    }
}
