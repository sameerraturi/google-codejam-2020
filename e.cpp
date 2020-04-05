#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
#define ssd ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 998244353
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define trace(x) cerr<<#x<<" : "<<x<<endl;
using namespace std;
using namespace __gnu_pbds;

int ans[55][55];
bool row[55][55];
bool col[55][55],b;
void matrix(int n,int k,int t,int r, int c, int kk) 
{
	/*cout<<kk<<endl;
    cout<<r<<" "<<c<<endl;*/
    if (kk==k && !b && r==n && c==n+1) 
	{
        cout <<"Case #"<<t<<": "<<"POSSIBLE\n";
        for (int i=1;i<=n;i++) 
		{
            for (int j=1;j<=n;j++) cout<<ans[i][j]<<" ";
            cout<<endl;
        }
		b = true;
        return;
    } 
	else if (r > n) return;
	else if (c > n) matrix(n,k,t,r + 1, 1, kk);
    for (int i=1; i<=n&&!b; i++) 
	{
        if (!row[r][i] && !col[c][i]) 
		{
            row[r][i] = true;
			col[c][i] = true;
            if(r==c) kk=kk+i;
            ans[r][c] = i;
            matrix(n,k,t,r,c+1,kk);
            row[r][i]=false;
			col[c][i]=false; 
            if (r==c) kk=kk-i;
        }
    }
}

int main() 
{
    int l;
    cin>>l;
    for (int i=1;i<=l;i++) 
	{
		int n,k;
        cin>>n>>k;
		b=false;
		for (int i=1;i<=n;i++) 
		{
            for (int j=1;j<=n;j++)
			{
				ans[i][j]=0;
			}
		}
        matrix(n,k,i,1,1,0);
        if (!b) cout <<"Case #"<<i<<": "<<"IMPOSSIBLE\n";
    }
    return 0;
}