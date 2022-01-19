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
    if(n==1)cout<<1<<endl;
    else if(n==2||n==3)cout<<"NO SOLUTION"<<endl;
    else if (n==4)cout<<"2 4 1 3\n";
    else{
        for(int i=1;i<=n;i+=2)cout<<i<<" ";
        for(int i=2;i<=n;i+=2)cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
