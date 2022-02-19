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
    int n; cin>>n;
    pair<PII,int> a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first.first>>a[i].first.second;
        a[i].second=i;
    }
    int ans1[n],ans2[n];

    sort(a,a+n,[&](pair<PII,int> i, pair<PII,int> j){if(i.first.first==j.first.first)return i.first.second>j.first.second; else return i.first.first<j.first.first;});

    int mn=1e9+5;

    for(int i=n-1; i>=0; i--)
    {
        if(mn<=a[i].first.second)ans1[a[i].second]=1;
        else ans1[a[i].second]=0;

        mn=min(mn,a[i].first.second);
    }
    
    int mx=0;
    
    for(int i=0; i<n; i++)
    {
        if(mx>=a[i].first.second)ans2[a[i].second]=1;
        else ans2[a[i].second]=0;

        mx=max(mx,a[i].first.second);
    }

    for(int i=0; i<n; i++)cout<<ans1[i]<<" ";
    cout<<nl;
    for(int i=0; i<n; i++)cout<<ans2[i]<<" ";
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