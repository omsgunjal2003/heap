#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_pset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld; 
#define pb push_back
#define trav(a,x) for (auto& a : x)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)
#define vll             vector<ll>
#define pll             pair<ll,ll>
#define vpll            vector<pair<ll,ll>>
#define ff              first
#define ss              second
#define mnv(v)          *min_element(v.begin(),v.end())
#define mxv(v)          *max_element(v.begin(),v.end())
#define all(v)          v.begin(),v.end()
#define acc(v)          accumulate(v.begin(),v.end(),0ll)
#define rev(v)          reverse(v.begin(),v.end())
#define srt(v)          sort(v.begin(),v.end())
#define rsrt(v)         sort(v.rbegin(),v.rend())
#define PYes cout<<"Yes\n"
#define PNo cout<<"No\n"
#define PYES cout<<"YES\n"
#define PNO cout<<"NO\n"
#define endl '\n'
#define flush cout.flush();
#define eps             1e-9
const ll mod1 = 1000000007;
const ll mod2 = 998244353;
const ll inf  = 9223372036854775806;
const ld pie  = 3.141592653589793238462;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
mt19937 rng((unsigned int)chrono::steady_clock::now().time_since_epoch().count());
 
//--------------------------------------------functions-------------------------------------------------//
 ll power(ll a,ll b){ll result=1;while(b>0){if(b%2 == 1){result *= a;} a *= a;b /= 2;}return result;}
ll powerM(ll x,ll y,ll m){ ll ans=1,r=1; x%=m; while(r>0&&r<=y) {  if(r&y) { ans*=x; ans%=m; } r<<=1; x*=x; x%=m; }return ans;}
ll countSetBits(ll x){ll Count=0;while(x>0){if(x&1) Count++;x=x>>1;}return Count;}
//--------------------------------------------solve----------------------------------------------------//
// Write flush after every output in interactive problem
void solve() {
    vector<vector<pll>> v;
    ll sz;
    cin>>sz;
    ll x;
    while(cin>>x){
      if(x==4)break;
      if(x==1){
        ll y,z;
        cin>>y>>z;
        bool ok=false;
        rep(i,0,(ll)v.size()){
          ll s1=v[i].back().ss;
          if((sz-s1-4)>=y){
            ok=true;
            pll p={z,s1+y+4};
            v[i].pb(p);
            break;
          }
        }
        if(!ok){
          vpll v1={{z,y+20}};
          v.pb(v1);
        }
      }else if(x==2){
        cout<<(ll)v.size()<<" ";
        rep(i,0,(ll)v.size()){
          cout<<(ll)v[i].size()<<" ";
        }
        cout<<endl;
      }else{
        ll y;cin>>y;
        bool ok=false;
        rep(i,0,(ll)v.size()){
          rep(j,0,(ll)v[i].size()){
            if(v[i][j].ff==y){
              cout<<i<<" "<<j<<endl;
              ok=true;
              break;
            }
          }
        }
        if(!ok){
          cout<<"-1 -1\n";
        }
      }
    }
}
 int main(){
  fast;
 //    freopen("calc.in","r",stdin);
//    freopen("calc.out","w",stdout);
 cout << fixed << setprecision(20);
  ll t=1;
    // cin>>t;
       for(ll i=1;i<=t;i++){
     // cout<<"Case #"<<i<<": "; 
    solve();
  }
  return 0;
}
