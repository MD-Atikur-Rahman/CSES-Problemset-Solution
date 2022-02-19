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

char g[8][8];
int ans=0;

void fun(int r)
{
    if(r==8)
    {
        ans++;
        return;
    }

    for(int i=0; i<8; i++)
    {
        if(g[r][i]!='.')continue;
        for(int j=r+1; j<8; j++)
        {
            g[j][i]++;
            if(i+j-r<8)g[j][i+j-r]++;
            if(i-j+r>=0)g[j][i-j+r]++;
        }
        fun(r+1);
        for(int j=r+1; j<8; j++)
        {
            g[j][i]--;
            if(i+j-r<8)g[j][i+j-r]--;
            if(i-j+r>=0)g[j][i-j+r]--;
        }
    }
}

void Engine()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)cin>>g[i][j];
    }
    fun(0);
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