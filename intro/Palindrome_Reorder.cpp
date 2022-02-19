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
    string s; cin>>s;
    int cnt[26];
    memset(cnt,0,sizeof cnt);

    for(char ch:s)cnt[ch-'A']++;

    char od='0';

    for(int i=0; i<26; i++)
    {
        if(cnt[i]&1)
        {
            if(od=='0')od='A'+i;
            else 
            {
                cout<<"NO SOLUTION";
                return;
            }
        }
    }
    int tm;
    for(int i=0; i<26; i++)
    {
        tm=cnt[i]>>1;
        for(int j=0; j<tm; j++)cout<<char('A'+i);
    }
    if(od!='0')cout<<od;
    for(int i=25; i>=0; i--)
    {
        tm=cnt[i]>>1;
        for(int j=0; j<tm; j++)cout<<char('A'+i);
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