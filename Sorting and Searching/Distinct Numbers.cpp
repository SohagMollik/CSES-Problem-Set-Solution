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
    set<int>st;
    for(int i=0;i<n;++i){
    cin>>a[i];
    st.insert(a[i]);
    }
    cout<<st.size()<<nn;

    return 0;
}

