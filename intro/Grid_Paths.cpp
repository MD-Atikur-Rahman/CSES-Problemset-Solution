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

/*----------------------Graph Moves----------------*/
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

string s;
int ans=0;
bool b[8][8];

void fun(int in, int r, int c)
{
    if(r==7 && c==1)
    {
        if(in==48)ans++;
        return;
    }

    if(in==48)
    {
        if(r==7 && c==1)ans++;
        return;
    }

    if((r+1>7 || b[r+1][c]==true) && (r-1<1 || b[r-1][c]==true))
    {
        if(c+1<=7 && b[r][c+1]==false && c-1>0 && b[r][c-1]==false)return;
    }
    if((c+1>7 || b[r][c+1]==true) && (c-1<1 || b[r][c-1]==true))
    {
        if(r+1<=7 && b[r+1][c]==false && r-1>0 && b[r-1][c]==false)return;
    }

    if(r+1<=7 && c+1<=7 && b[r+1][c+1]==true && b[r+1][c]==false && b[r][c+1]==false)return;
    if(r-1>0 && c-1>0 && b[r-1][c-1]==true && b[r-1][c]==false && b[r][c-1]==false)return;

    b[r][c]=true;
    int r1,c1;
    if(s[in]=='?')
    {
        for(int i=0; i<4; i++)
        {
            r1=r+fy[i];
            c1=c+fx[i];

            if(r1<=7 && r1>0 && c1<=7 && c1>0 && b[r1][c1]==false)fun(in+1,r1,c1);
        }
    }
    else
    {
        if(s[in]=='D' && r+1<=7 && b[r+1][c]==false)fun(in+1,r+1,c);
        if(s[in]=='U' && r-1>0 && b[r-1][c]==false)fun(in+1,r-1,c);
        if(s[in]=='R' && c+1<=7 && b[r][c+1]==false)fun(in+1,r,c+1);
        if(s[in]=='L' && c-1>0 && b[r][c-1]==false)fun(in+1,r,c-1);
    }

    b[r][c]=false;
}

void Engine()
{
    cin>>s;
    fun(0,1,1);
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