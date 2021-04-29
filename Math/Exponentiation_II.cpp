#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1001;
const int MOD = 1000000007;
const ll MAX = 1e9;
int modpow(int a,int b, int m){
    if(b==0) return 1%m;
    long long u= modpow(a,b/2,m);
    u= (u*u)%m;
    if(b%2==1) u=(u*a)%m;
    return u;
}
void solve(){
    int a,b,c;cin >>  a >> b >> c;
    int y=modpow(b,c,MOD-1);
    cout << modpow(a,y,MOD)<< endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;cin >> t;
    while(t--) solve();
}