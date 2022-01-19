#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll ans=0;
     for(int i=1;i<v.size();i++)
     {
         if(v[i-1]>v[i]){
            ll x=(v[i-1]-v[i]);
            ans+=x;
            v[i]+=x;
         }
     }

    cout<<ans<<endl;

    return 0;
}
