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

    long long max_so_far=INT_MIN;
    long long max_ending_here=0;

    for(int i=0;i<n;++i){
        max_ending_here+=(long long)a[i];
        if(max_so_far<max_ending_here)max_so_far=max_ending_here;
        if(max_ending_here<0)max_ending_here=0;
    }

    cout<<max_so_far<<nn;

    return 0;
}

