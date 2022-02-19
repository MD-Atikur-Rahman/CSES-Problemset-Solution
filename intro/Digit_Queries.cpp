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
    ll k; cin>>k;
    ll pos=0,cd=1,nm=9,age=0;
    
    while(1)
    {
        if(pos+cd*nm>=k)break;
        pos+=cd*nm;
        nm*=10;
        cd++;
        age*=10;
        age+=9;
    }

    age+=(k-pos)/cd;
    if((k-pos)%cd)
    {
        age++;
        string s=to_string(age);
        cout<<s[(k-pos)%cd-1]<<nl;
    }
    else cout<<age%10<<nl;
}

int main()
{
    FastIO
    int tt=1;
    cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  