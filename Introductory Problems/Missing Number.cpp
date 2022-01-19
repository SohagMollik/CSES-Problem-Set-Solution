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
    int x=n-1;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    sort(a,a+x);
    if(n==2){
        if(a[0]==1)cout<<2<<endl;
        else cout<<1<<endl;
    }
    else{
    int i=0;
    while(1){
        if(a[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    else{
        i++;
    }
    }
    }
    return 0;
}
