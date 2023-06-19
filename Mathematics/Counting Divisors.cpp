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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>st;
        for(int i=1;i*i<n+1;++i){
            if(n%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        cout<<st.size()<<nn;
    }

    return 0;
}

