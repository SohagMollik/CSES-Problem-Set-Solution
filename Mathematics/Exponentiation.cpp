#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

ll solve(ll a,ll b, ll mod)
{
    if(b==0)return 1;
    else if(b%2==1){
        ll p=a%mod;
        ll q=(solve(a,b-1,mod))%mod;
        return (p*q)%mod;

    }
    else{
        ll p=(solve(a,b/2,mod))%mod;
        return (p*p)%mod;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,mod=1000000007;
        cin>>a>>b;
        if(a==0 && b==0)cout<<1<<nn;
        else
        cout<<solve(a,b,mod)<<nn;
    }

    return 0;
}
