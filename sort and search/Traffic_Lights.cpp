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
    int len,n; cin>>len>>n;
    set<int> s;
    s.insert(0);
    s.insert(len);
    multiset<int> ms;
    ms.insert(len);

    int u,v,d,pos;

    for(int i=0; i<n; i++)
    {
        cin>>pos;
        auto it=s.upper_bound(pos);
        v=*it;
        it--;
        u=*it;
        d=v-u;
        s.insert(pos);
        ms.erase(ms.find(d));
        ms.insert(pos-u);
        ms.insert(v-pos);
        it=ms.end();
        it--;
        cout<<*it<<" ";
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