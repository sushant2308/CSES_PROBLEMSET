#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1001;
const int MOD = 1000000007;
const ll MAX = 1e9;

void solve(){
    int n;cin >> n;
    int maxu=-1;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        maxu=max(a[i],maxu);
    }
    vector<int> count(maxu+1,0);
    for(int i=0;i<n;i++) count[a[i]]++;
    for(int i=maxu;i>=1;i--){
        int j=i;
        int counter=0;
        while(j<=maxu){
            if(count[j]>=2) {cout << j << endl;return;}
            else if(count[j]==1) counter++;
            j+=i;
            if(counter==2) {cout <<i << endl;return; }
        }
    }
}
   
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   
    solve();
}