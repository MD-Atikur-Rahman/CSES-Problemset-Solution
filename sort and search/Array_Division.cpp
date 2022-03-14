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
    int n,k,cnt; cin>>n>>k;
    int a[n]; for(int &x:a)cin>>x;

    ll l=0,r=1e15,m,sum;
    bool flag;

    while(l<r)
    {
        m=l+r+1>>1;
        
        if(m==r)break;
        cnt=1;
        sum=0;
        flag=true;
        for(int i=0; i<n; i++)
        {
            if(a[i]>m)
            {
                flag=false;
                break;
            }
            sum+=a[i];
            if(sum>m)
            {
                cnt++;
                sum=a[i];
            }
        }
        if(cnt>k)flag=false;

        if(flag)r=m;
        else l=m;
    }
    cout<<r<<nl;
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