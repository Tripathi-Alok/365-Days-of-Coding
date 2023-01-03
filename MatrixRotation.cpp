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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int Min=min(a,min(b,min(c,d)));
        int Max=max(a,max(b,max(c,d)));

        if((Min==a && Max==d) || (Min==d && Max==a)) cout<<"YES"<<endl;
        else if((Min==c && Max==b) || (Min==b && Max==c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
