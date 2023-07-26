#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    ll ans=0;

    for (int b = k+1; b <= n; b++){
        int full_interval = (n+1)/k;
        ans += full_interval * (b-k);

        ll extra = (n+1)%k;
        ans += max(0LL, extra-k);
    }
    if(!k)ans -= n;
    cout << ans << endl;

    return 0;
}