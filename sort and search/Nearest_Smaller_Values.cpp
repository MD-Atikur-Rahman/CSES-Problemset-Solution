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
    int n,x; cin>>n;
    set<PII> s;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(s.empty() || (*s.begin()).first>=x)cout<<0<<" ";
        else
        {
            auto it=s.lower_bound({x,0});
            it--;
            cout<<it->second<<" ";
        }

        while(s.lower_bound({x,0})!=s.end())
        {
            s.erase(s.lower_bound({x,0}));
        }
        s.insert({x,i});
    }
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