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

    int n , m;
    cin >> n >> m;
    vector<ll> h(n);

    for(int i = 0; i < n; i++){
        cin>> h[i];
    }

    sort(h.begin(), h.end());

    ll pre[n], suf[n];
    pre[0] = 0;
    suf[0] = 0;

    int cnt = 1;
    for(int i = 0; i < n; i+=2){
        pre[cnt] = pre[cnt-1] + abs(h[i+1]-h[i]);
        cnt ++;
    }
    cnt  = 1;
    for(int i = n-1; i >= 0; i-=2){
        suf[cnt] = abs(h[i] - h[i-1]) + suf[cnt-1];
        cnt ++;
    }
    ll ans = (1LL<<62);
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;

        int pos  = lower_bound(h.begin(), h.end(),x)-h.begin();
        ll tem = pre[pos/2] + suf[(n-pos)/2];

        if(pos%2){
            tem += abs(x - h[pos-1]);
        }
        else{
            tem += abs(x - h[pos]);
        }
        ans  = min(ans, tem);
    }
    cout << ans << endl;


    return 0;
}