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
        ll p;
        int q;
        cin >> p >> q;

        if(p % q){
            cout << p << endl;
        }
        else{
            int tem = q;
            vector<int>v;
            for(int i = 2; i*i <= q; i++){
                if(!(tem % i)){
                    v.push_back(i);
                    while(!(tem % i))tem /= i;
                }
            }
            if(tem>1) v.push_back(tem);
            ll ans = 1;
            for(auto num:v){
                ll tem = p;
                while(!(tem % q)){
                    tem /= num;
                }
                ans = max(ans, tem);
            }
            cout << ans<<endl;
        }

    }

    return 0;
}