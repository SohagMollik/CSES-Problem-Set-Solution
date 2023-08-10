#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,x,target;
    cin>>n>>target;
    vector<pair<int,int>>ans;
    for(int i=0; i<n; ++i)
    {
        cin>>x;
        ans.pb({x,i+1});
    }
    sort(ans.begin(),ans.end());

    int left=0,right=n-1;
    while(left<right)
    {

        if((ans[left].f + ans[right].f)==target)
        {
            cout<<ans[left].s<<" "<<ans[right].s<<nn;
            return 0;
        }
        else if((ans[left].f + ans[right].f)>target)right--;
        else left++;
    }

    cout<<"IMPOSSIBLE"<<nn;

    return 0;
}

