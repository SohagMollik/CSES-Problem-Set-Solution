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
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if((sum%2)!=0)cout<<"NO\n";
    else{
         ll x=sum/2;
        vector<int>v,v1;
         for(int i=n;i>=1;i--){
            if(x>=i){
                    x-=i;
                v.pb(i);
            }
            else {
                v1.pb(i);
            }
         }
         cout<<"YES\n"<<v.size()<<endl;
         for(auto it: v)cout<<it<<" ";
         cout<<endl<<v1.size()<<endl;
           for(auto t: v1)cout<<t<<" ";
         cout<<endl;
    }
    return 0;
}
