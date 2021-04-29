#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1001;
const int MOD = 1000000007;
const ll MAX = 1e9;
int count(int n){
    int ans=1;
    while(n%2==0){
        n/=2;
        ans++;
    }
    for(int i=3;i*i<=n;i++){
        int count=1;
        while(n%i==0){
            n/=i;
            count++;
        }
        ans*=count;
    }
    if(n >1) ans*=2;
    return ans;

}
void solve(){
    int n;cin >> n;
    cout << count(n) << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;cin >> t;
    while(t--) solve();
}