#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        vector<int>arr(a+b);
        for(int i=0;i<a+b;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end()-1);
        reverse(arr.begin(),arr.end());
        ll ans=0;
        for(int i=0;i<a;i++){
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }
}
