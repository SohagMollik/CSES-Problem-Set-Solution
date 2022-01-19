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
    string s;
    cin>>s;
    vector<int>v;
    int a=0;
    for(int i=1;i<s.size();i++){
        if(s[i-1]!=s[i]){
            a=0;
            continue;
        }
        else if(s[i-1]==s[i]){
            a++;
            v.pb(a);
        }

    }
    if(v.size()==0)cout<<1<<endl;
    else{
    int mx=*max_element(v.begin(),v.end());
    cout<<mx+1<<endl;
    }
    return 0;
}
