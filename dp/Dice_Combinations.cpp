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

ll const MOD=1e9+7;

vector<VL> magmat {
    {0,0,0,0,0,1},
    {1,0,0,0,0,1},
    {0,1,0,0,0,1},
    {0,0,1,0,0,1},
    {0,0,0,1,0,1},
    {0,0,0,0,1,1}
};

vector<VL> matmul(vector<VL>& a, vector<VL>& b)
{
    vector<VL> res(6,VL(6));
    
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            for(int k=0; k<6; k++)
            {
                res[i][j]+=a[i][k]*b[k][j]%MOD;
                res[i][j]%=MOD;
            }
        }
    }
    return res;
}


vector<VL>  matexp(int p)
{
    vector<VL> res {
        {1,0,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,1,0,0,0},
        {0,0,0,1,0,0},
        {0,0,0,0,1,0},
        {0,0,0,0,0,1}
    };

    while(p)
    {
        if(p&1)res=matmul(res,magmat);
        p>>=1;
        magmat=matmul(magmat,magmat);
    }
    return res;
}

void Engine(int tc)
{
    int n,s=1; cin>>n;
    VL base(6);
    base[0]=1;
    for(int i=1; i<6; i++)
    {
        base[i]=1+s;
        s+=base[i];
    }

    if(n<7)
    {
        cout<<base[n-1]<<nl;
        return;
    }

    magmat=matexp(n-6);

    ll ans=0;

    for(int i=0; i<6; i++)
    {
        ans+=base[i]*magmat[i][5];
        ans%=MOD;
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