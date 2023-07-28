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

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        for(ll i{2}; ; i++){
            if(n%i==0){
                if(n%(i*i)==0){
                    cout << i  << " " << n/(i*i) << '\n';
                }
                else {
                    cout << (ll) sqrt(n/i) << " " << i << '\n';
                }
                break;
            }
        }
    }

    return 0;
}