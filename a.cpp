#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define trace(x) cerr<<#x<<" : "<<x<<endl;
#define ssd ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>


int main()
{
	ssd
	#define task "TASK"
	 //freopen(task".inp","r",stdin);
    //freopen(task".out","w",stdout);
    ll t,n;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;
        ll a[n][n];
        ll sum=0,r=0,c=0;
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                cin>>a[j][k];
            }
        }
        
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                if(j==k)
                sum+=a[j][k];
            }
        }
        int flag=0;
        for(ll j=0;j<n;j++)
        {
            flag=0;
            map<ll,ll>m;
            for(ll k=0;k<n;k++)
            {
                m[a[j][k]]++;
                if(m[a[j][k]]>1)
                flag=1;
            }
            if(flag==1)
            r++;
        }
        for(ll j=0;j<n;j++)
        {
            flag=0;
            map<ll,ll>m;
            for(ll k=0;k<n;k++)
            {
                m[a[k][j]]++;
                if(m[a[k][j]]>1)
                flag=1;
            }
            if(flag==1)
            c++;
        }
        
        cout<<"Case #"<<i<<": "<<sum<<" "<<r<<" "<<c<<endl;
    }
	return 0;
}