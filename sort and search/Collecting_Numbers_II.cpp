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
    int n,x,a,b,m; cin>>n>>m;
    int pos[n+1],ar[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        pos[ar[i]]=i;
    }
    int ans=1;
    for(int i=2; i<=n; i++)
    {
        if(pos[i]<pos[i-1])ans++;
    }
    
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        if(ar[a]>1 && pos[ar[a]]<pos[ar[a]-1])ans--;
        if(ar[a]<n && ar[a]+1!=ar[b] && pos[ar[a]+1]<pos[ar[a]])ans--;
        if(ar[b]>1 && pos[ar[b]]<pos[ar[b]-1])ans--;
        if(ar[b]<n && ar[b]+1!=ar[a] && pos[ar[b]+1]<pos[ar[b]])ans--;
        
        swap(ar[a],ar[b]);
        pos[ar[a]]=a;
        pos[ar[b]]=b;
        
        if(ar[a]>1 && pos[ar[a]]<pos[ar[a]-1])ans++;
        if(ar[a]<n && ar[a]+1!=ar[b] && pos[ar[a]+1]<pos[ar[a]])ans++;
        if(ar[b]>1 && pos[ar[b]]<pos[ar[b]-1])ans++;
        if(ar[b]<n && ar[b]+1!=ar[a] && pos[ar[b]+1]<pos[ar[b]])ans++;

        cout<<ans<<nl;
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