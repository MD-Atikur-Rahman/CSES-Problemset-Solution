#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define PB push_back
#define All(x) (x).begin(),(x).end()
#define MP make_pair
#define nl "\n"
typedef pair<int,int>PII;
typedef vector<int>VI;
typedef vector<PII>VPII;
typedef vector<VI>VVI;
typedef vector<long long>VL;
typedef vector <VL>VVl;
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

map<int,VPII> mp;

void Engine()
{
    int n,x,sum; cin>>n>>x;
    int a[n]; for(int &x:a)cin>>x;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum=a[i]+a[j];
            if(sum>=x)continue;
            if(mp.find(x-sum)!=mp.end())
            {
                for(PII z:mp[x-sum])
                {
                    if(z.first==i || z.second==i || z.first==j || z.second==j)continue;
                    cout<<z.first+1<<" "<<z.second+1<<" "<<i+1<<" "<<j+1<<nl;
                    return;
                }
            }
            mp[sum].push_back({i,j});
        }
    }
    cout<<"IMPOSSIBLE\n";
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  