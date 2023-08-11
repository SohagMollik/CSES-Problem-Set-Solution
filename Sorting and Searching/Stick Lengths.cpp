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

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){cin>>a[i];}
    sort(a,a+n);

    if(n%2!=0){
        int mid=a[n/2];
        long ans=0;
        for(int i=0;i<n;++i){
              ans+=(long)(abs(mid-a[i]));
        }
        cout<<ans<<nn;
    }
    else{
        int mid=a[n/2];
        long ans1=0;
        for(int i=0;i<n;++i){
              ans1+=(long)(abs(mid-a[i]));
        }

         int midd=a[(n/2)-1];
        long ans2=0;
        for(int i=0;i<n;++i){
              ans2+=(long)(abs(midd-a[i]));
        }

        cout<<min(ans1,ans2)<<nn;
    }

    return 0;
}

