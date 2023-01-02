#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        ll ans=1;
        for(auto i : arr){
            ans*=i;
        }
        cout<<(ans+n-1)*2022<<endl;
    }
}
