#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ab[n];
    for(int i = 0;i<n;i++)
    {
        cin>>ab[i];
    }
    int d[n+1] = {0};
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,u; ///left ,right , upgrade value;
        cin>>l>>r>>u;
        d[l]+=u;
        d[r+1]-=u;
    }
    int dp[n+1];
    for(int i = 0;i<n+1;i++)
    {
        if(i == 0) dp[i] = d[i];
        else 
        {
            dp[i] = dp[i-1]+d[i];
        }
    }
    for(int i = 0;i<n;i++)
    {
        ab[i] = ab[i]+dp[i];
    }
    for(int i = 0;i<n;i++)
    {
        cout<<ab[i]<<" ";
    }
    cout<<endl;

    return 0;
}
