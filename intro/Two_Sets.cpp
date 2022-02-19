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
template <typename T> vector<T> sort_unique(vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

void Engine()
{
    int n; cin>>n;
    if(n&1)
    {
        if((n-3)%4)
        {
            cout<<"NO\n";
            return;
        }

        cout<<"YES\n";

        cout<<(n-3)/2+2<<nl;
        cout<<1<<" "<<2<<" ";

        for(int i=4; i<=n; i+=2)
        {
            cout<<i<<" ";
            if(i==(n-3)/2+2)i++;
        }
        cout<<nl;

        cout<<(n-3)/2+1<<nl;
        cout<<3<<" ";

        for(int i=5; i<=n; i+=2)
        {
            cout<<i<<" ";
            if((n-3)/2+3==i)i--;
        }
        cout<<nl;
    }
    else
    {
        if(n%4)
        {
            cout<<"NO\n";
            return;
        }

        cout<<"YES\n";

        cout<<n/2<<nl;
        for(int i=1; i<=n; i+=2)
        {
            cout<<i<<" ";
            if(i==n/2-1)i++;
        }
        cout<<nl;

        cout<<n/2<<nl;
        for(int i=2; i<=n; i+=2)
        {
            cout<<i<<" ";
            if(i==n/2)i--;
        }
        cout<<nl;

    }
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        Engine();
    }
    return 0;
}  