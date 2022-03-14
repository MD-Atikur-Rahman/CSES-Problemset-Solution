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
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a)cin>>x;

    ll ans=0;
    multiset<int> ms;

    int cnt=0,l=0,r=0;

    while(l<n)
    {
        while(r<n)
        {
            if(ms.find(a[r])==ms.end())
            {
                if(cnt==k)break;
                else 
                {
                    cnt++;
                    ms.insert(a[r]);
                }
            }
            else ms.insert(a[r]);
            r++;
        }
        ans+=r-l;
        ms.erase(ms.find(a[l]));
        if(ms.find(a[l])==ms.end())cnt--;
        l++;
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
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  