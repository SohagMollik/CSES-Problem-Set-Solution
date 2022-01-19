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
    cout<<n<<" ";
    while(n!=1){
        if(n&1)n=n*3+1;
        else n/=2;
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
