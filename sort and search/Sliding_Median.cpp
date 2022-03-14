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

/*----------------------Policy Based Data Structures in g++----------------*/

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<PII, null_type, less<PII>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 


// new_data_set p; 
// p.insert(5);
// p.insert(2);
// p.insert(6);
// p.insert(4);
// p.find_by_order(3); // 6
// p.order_of_key(7) //4
/*---------------------------------- x ------------------------------------*/

void Engine(int tc)
{
    int n,k,x; cin>>n>>k;
    int a[n]; for(int &x:a)cin>>x;

    new_data_set ns;

    for(int i=0; i<n; i++)
    {
        ns.insert({a[i],i});
        if(i>=k-1)
        {
            cout<<ns.find_by_order((k-1)/2)->first<<" ";
            ns.erase({a[i-k+1],i-k+1});
        }
    }
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