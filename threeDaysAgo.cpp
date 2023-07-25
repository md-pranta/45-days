
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)

#define N 1000006


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    string x = "0000000000";

    map<string, int> cnt;
    cnt[x]++;

    ll ans = 0;

    for(int i = 0; i < s.size(); i++){
        int d = s[i]-'0';
        //x ^= (1<<d);
        if(x[d] =='0')x[d]='1';
        else x[d] = '0';
        ans += cnt[x];
        cnt[x]++;
    }

    cout << ans << '\n';


    return 0;
}