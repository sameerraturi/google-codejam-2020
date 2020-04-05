#include<bits/stdc++.h>
#define ll long long int
#define ssd ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
	ssd
	#define task "TASK"
	 //freopen(task".inp","r",stdin);
    //freopen(task".out","w",stdout);

    ll x=1,t,b;
    cin>>t>>b;
    
    ll a[b];
    while(t--)
    {
        for(ll i=0;i<b;i++)
        {
            cout<<i+1<<endl;
            cin>>a[i];
            
        }
        for(ll i=0;i<b;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        char ch;
        cin>>ch;
        if(ch=='N')
        break;
        
    }


	return 0;
}
