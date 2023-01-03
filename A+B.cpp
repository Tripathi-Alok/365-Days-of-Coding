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
        string s;
        cin>>s;
        string one="",two="";
        one+=s[0];
        two+=s[2];
        cout<<stoi(one) + stoi(two)<<endl;
    }
}
