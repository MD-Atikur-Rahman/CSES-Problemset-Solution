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

void Engine(int tc)
{
    int n,sum; cin>>n>>sum; 
    int coin[n];
    for(int &x:coin)cin>>x;
    int v,ans=-1,cs=1,ns=0,val=1;

    bool vis[sum+1];
    memset(vis,0,sizeof vis);
    queue<int> q;
    q.push(0);

    while(!q.empty())
    {
        v=q.front();
        q.pop();

        for(int x:coin)
        {
            if(x+v>sum || vis[x+v])continue;
            vis[x+v]=true;
            ns++;
            if(x+v==sum)ans=val;
            q.push(x+v);
        }

        cs--;
        if(cs==0) 
        {
            swap(cs,ns);
            val++;
        }
    }
    cout<<ans<<nl;
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        Engine(tc);
    }
    return 0;
}  