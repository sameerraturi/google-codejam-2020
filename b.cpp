#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define trace(x) cerr<<#x<<" : "<<x<<endl;
#define ssd ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>


long long int strtonum(char s)
{
	long long int num=0;
	for(int i=0;i<1;i++)
	{
		if(s=='0')
		{
			num=num*10+0;
		}
		else if(s=='1')
		{
			num=num*10+1;
		}
		else if(s=='2')
		{
			num=num*10+2;
		}
		else if(s=='3')
		{
			num=num*10+3;
		}
		else if(s=='4')
		{
			num=num*10+4;
		}
		else if(s=='5')
		{
			num=num*10+5;
		}
		else if(s=='6')
		{
			num=num*10+6;
		}
		else if(s=='7')
		{
			num=num*10+7;
		}
		else if(s=='8')
		{
			num=num*10+8;
		}
		else if(s=='9')
		{
			num=num*10+9;
		}
	}
	return num;
}

int main()
{
	ssd
	#define task "TASK"
	 //freopen(task".inp","r",stdin);
    //freopen(task".out","w",stdout);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        string s,ans;
        cin>>s;
        ll num1=0,num2=0;
        
        for(ll j=0;j<s.length();j++)
        {
            num1=strtonum(s[j]);
            if(j>=1)
            {
                if(num1>=num2)
                {
                    for(ll k=0;k<(num1-num2);k++)
                    {
                        ans.push_back('(');
                        
                    }
                
                }
                else
                {
                    for(ll k=0;k<(num2-num1);k++)
                    {
                        ans.push_back(')');
                        
                    }
                }
            }
            else
            {
                for(ll j=0;j<num1;j++)
                ans.push_back('(');
            }
            ans.push_back(s[j]);
            num2=num1;
        }
        num1=strtonum(s[s.length()-1]);
        for(ll j=0;j<num1;j++)
        ans.push_back(')');
        
        
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }

	return 0;
}