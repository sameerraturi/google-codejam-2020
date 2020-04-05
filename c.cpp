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
    ll t,n,t1,t2;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;
        ll temp2;
        string str,ans;
        int flag=0;
        vector<ll>index;
        vector<pair<ll,ll>>v;
        pair<ll,ll> temp;
        map<char,bool>m;
        for(ll j=0;j<n;j++)
        {
            cin>>t1>>t2;
           // cout<<t1<<" "<<t2<<endl;
            v.push_back(make_pair(t1,t2));
            index.push_back(j);
        }
        
        // for(ll j=0;j<n;j++)
        // {
        //     cout<<(v[j].first).first<<" "<<(v[j].first).second<<" "<<v[j].second<<endl;
            
            
        // }
        
        for(ll j=0;j<n-1;j++)
        {
            for(ll k=0;k<n-j-1;k++)
            {
                if(v[k].first>v[k+1].first)
                {
                    temp=v[k];
                    v[k]=v[k+1];
                    v[k+1]=temp;
                    temp2=index[k];
                    index[k]=index[k+1];
                    index[k+1]=temp2;
                }
            }
        }
        // for(ll j=0;j<n;j++)
        // {
        //     cout<<v[j].first<<" "<<v[j].second<<" "<<index[j]<<endl;
            
            
        // }
        ll c1=0,c2=0;
        for(ll j=0;j<n;j++)
        {
            if(c1<=v[j].first)
            {
                c1=v[j].second;
                str.push_back('C');
            }
            else
            {
                if(c2<=v[j].first)
                {
                    c2=v[j].second;
                    str.push_back('J');
                }
                else
                {
                    flag=1;
                }
            }
            
            if(flag==1)
            break;
            
        }
        ans.resize(n,'$');
        if(flag==0)
        {
            for(ll j=0;j<n;j++)
            {
                ans[index[j]]=str[j];
            }
           // cout<<str<<endl;
            cout<<"Case #"<<i<<": "<<ans<<endl;
        }
        else
        {//cout<<str<<endl;
            cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
        }
    }

	return 0;
}