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

void Engine()
{
    int n,cr=0; cin>>n;
    PII st[n];
    int ed[n],ans[n];

    for(int i=0; i<n; i++)
    {
        cin>>st[i].first>>ed[i];
        st[i].second=i;
    }
    sort(st,st+n);

    priority_queue<PII,VPII,greater<PII>> pq;
    for(int i=0; i<n; i++)
    {
        if(pq.empty() || pq.top().first>=st[i].first)
        {
            cr++;
            ans[st[i].second]=cr;
            pq.push({ed[st[i].second],cr});
        }
        else
        {
            ans[st[i].second]=pq.top().second;
            pq.pop();
            pq.push({ed[st[i].second],ans[st[i].second]});
        }
    }

    cout<<cr<<nl;
    for(int i=0; i<n; i++)cout<<ans[i]<<" ";
    cout<<nl;
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