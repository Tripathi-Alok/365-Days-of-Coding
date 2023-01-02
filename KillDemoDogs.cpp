#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans1=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
        cout<<ans1<<endl;
    }
}
