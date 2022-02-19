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

int fact[9];
int cnt[26];

void Engine()
{
    string s;
    cin>>s;
    for(char ch:s)cnt[ch-'a']++;

    int ans=fact[s.length()];
    for(int x:cnt)ans/=fact[x];

    cout<<ans<<nl;
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<nl;
    } while (next_permutation(s.begin(),s.end()));
    
}

int main()
{
    FastIO

    fact[0]=1;
    for(int i=1; i<9; i++)fact[i]=i*fact[i-1];

    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  