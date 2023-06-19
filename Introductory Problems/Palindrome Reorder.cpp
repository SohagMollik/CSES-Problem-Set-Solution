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
    string st;
    cin>>st;
    map<char,int>mp;
    for(int i=0;i<st.size();++i){
        mp[st[i]]++;
    }
    int odd=0;
    for(auto &x: mp){
        if(x.s%2!=0)odd++;
    }
    if(odd>1)cout<<"NO SOLUTION\n";
    else{
        if(odd==0){
            string ans="";
            for(auto &y: mp){
                int z=y.s/2;
                for(int i=0;i<z;++i){
                    ans.pb(y.f);
                }
            }
            string temp=ans;
            reverse(ans.begin(),ans.end());
            temp+=ans;
          cout<<temp<<nn;
        }
        else{
              string ans="";
              string temp="";
            for(auto &y: mp){
                if(y.s%2==0){
                int z=y.s/2;
                for(int i=0;i<z;++i){
                    ans.pb(y.f);
                }
              }
            }
             temp=ans;
            reverse(temp.begin(),temp.end());
               for(auto &y: mp){
                if(y.s%2!=0){
                int z=y.s;
                for(int i=0;i<z;++i){
                    ans.pb(y.f);
                }
              }
            }

            ans+=temp;
            cout<<ans<<nn;
        }
    }

    return 0;
}

