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
const char mv[]={'D','U','R','L'};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

void Engine(int tc)
{
    int h,w; cin>>h>>w;
    char g[h][w],vis[h][w];
    int x,y,x1,y1,ex,ey;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>g[i][j];
            if(g[i][j]=='A')
            {
                x=i;
                y=j;
            }
            if(g[i][j]=='B')
            {
                ex=i;
                ey=j;
                g[i][j]='.';
            }
            vis[i][j]='p';
        }
    }

    queue<PII> q;
    q.push({x,y});
    vis[x][y]='s';

    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();

        for(int i=0; i<4; i++)
        {
            x1=x+fx[i];
            y1=y+fy[i];

            if(x1>=0 && x1<h && y1>=0 && y1<w && vis[x1][y1]=='p' && g[x1][y1]=='.')
            {
                vis[x1][y1]=mv[i];
                q.push({x1,y1});
            }
        }
    }

    if(vis[ex][ey]=='p')
    {
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";

    vector<char> ans;
    while(vis[ex][ey]!='s')
    {
        ans.push_back(vis[ex][ey]);

        if(vis[ex][ey]=='D')ex--;
        else if(vis[ex][ey]=='U')ex++;
        else if(vis[ex][ey]=='L')ey++;
        else if(vis[ex][ey]=='R')ey--;
    }

    cout<<ans.size()<<nl;
    reverse(All(ans));
    for(char ch:ans)cout<<ch;
    cout<<nl;
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